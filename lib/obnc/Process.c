#include ".obnc/Process.h"
#include <obnc/OBNC.h>
#ifdef _WIN32
	#include <windows.h>
#else
	#include <unistd.h>
#endif
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>


OBNC_INTEGER Process__Execute_(char* buffer, OBNC_INTEGER buffer_len, const char* command, OBNC_INTEGER command_len, const char argv[], OBNC_INTEGER argv_len, OBNC_INTEGER argv_len1)
{
  OBNC_INTEGER code;
  int pid, status, fd;
  int pfd[2];

  // check that the command does exist with `which`
  switch (pid = fork()) {
    case -1:
      perror("fork");
      exit(EXIT_FAILURE);
    case 0:  // child
      fd = open("/dev/null", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
      dup2(fd, STDOUT_FILENO);  // make stdout go null
      close(fd);

      execlp("which", "which", command, NULL);
      exit(EXIT_SUCCESS);
    default:  // parent
      pid = wait(&status);
      code = WEXITSTATUS(status);
      break;
  }

  if (code != 0) {
    // the command does not exist
    return -1;
  }

  // build the complete set of arguments for `exec`
  // see `man 3 execv`
  char* complete_argv[argv_len + 2];
  // prepend the name of the command as "$0"
  complete_argv[0] = (char*) command;
  // add the "real" arguments to the command
  for (int i = 0; i <= argv_len; i++) {
    complete_argv[i + 1] = (char*) &argv[i * argv_len1];
  }
  // append a NULL pointer to terminate the list of arguments
  complete_argv[argv_len + 1] = NULL;

  // open the pipe to get stdout back
  if (pipe(pfd) == -1){
    perror("error");
    exit(EXIT_FAILURE);
  }

  // run the command
  switch (pid = fork()) {
    case -1:
      perror("fork");
      exit(EXIT_FAILURE);
    case 0:  // child
      close(pfd[0]);  // close unused read end
      dup2(pfd[1], STDOUT_FILENO);
      close(pfd[1]);  // close so that the reader will see EOF

      execvp(command, complete_argv);
      exit(EXIT_SUCCESS);
    default:  // parent
      close(pfd[1]);  // close unused write end

      long size = read(pfd[0], buffer, buffer_len);  // read the pipe

      if ( (size > 0) && (size < buffer_len) ) {
      // add a null character to the end of the buffer
        if (buffer[size - 1] == '\n') {
          // remove the trailing newline
          buffer[size - 1] = '\0';
        } else {
          buffer[size] = '\0';
        }
      } else {
        perror("read pipe");
        exit(EXIT_FAILURE);
      }
      printf("");  // DO NOT REMOVE OR I WILL CRASH
      close(pfd[0]);

      pid = wait(&status);  // wait for the child
      code = WEXITSTATUS(status);  // get the error code of the child process
      break;
  }

  return code;
}


void Process__Exit_(OBNC_INTEGER code) {
  exit(code);
}


void Process__Init(void)
{
}

