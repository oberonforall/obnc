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

long Process__Execute_(const char* command, OBNC_INTEGER path_len, const char argv[], OBNC_INTEGER argv_len, OBNC_INTEGER argv_len1)
{
  int pid, status;
  long code = 0;

  char* complete_argv[argv_len + 2];

  complete_argv[0] = (char*) command;
  for (int i = 0; i <= argv_len; i++) {
    complete_argv[i + 1] = (char*) &argv[i * argv_len1];
  }
  complete_argv[argv_len + 1] = NULL;

  switch (pid = fork()) {
    case 0:
      execvp(command, complete_argv);
      exit(0);
    default:
      pid = wait(&status);
      code = WEXITSTATUS(status);
      break;
  }
  return code;
}


void Process__Init(void)
{
}

