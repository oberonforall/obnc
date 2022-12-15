#include ".obnc/Err.h"
#include <obnc/OBNC.h>
#include <stdio.h>

void Err__Open_(void)
{
	/*do nothing*/
}


void Err__Char_(char ch)
{
	putchar(ch);
}


void Err__String_(const char s[], OBNC_INTEGER sLen)
{
	OBNC_INTEGER i;

	i = 0;
	while ((i < sLen) && (s[i] != '\0')) {
		putchar(s[i]);
		i++;
	}
}


void Err__Int_(OBNC_INTEGER i, OBNC_INTEGER n)
{
	OBNC_WriteInt(i, n, stdout);
}


void Err__Hex_(OBNC_INTEGER i)
{
	OBNC_WriteHex((unsigned OBNC_INTEGER) i, stdout);
}


void Err__Real_(OBNC_REAL x, OBNC_INTEGER n)
{
	printf("%*" OBNC_REAL_MOD_W "E", (int) n, x);
}


void Err__Ln_(void)
{
	putchar('\n');
}


void Err__Init(void)
{
	/*do nothing*/
}
