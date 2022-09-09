/*GENERATED BY OBNC 0.8.4*/

#include "/home/gunter/GM_LANGUAGES/OBERON/V_07/OBNC/obnc-0.8.4/lib/obnc/OBNC_.h"
#include "In.h"

static char ch_;

static int n_;

static double x_;

static char s_[12];

int main(int argc, char *argv[])
{
	OBNC_Initialize(argc, argv);
	In_Init();
	In_Char_(&ch_);
	OBNC_ASSERT(In_Done_, "InTest.obn", 33);
	OBNC_ASSERT(ch_ == 'a', "InTest.obn", 34);
	In_Int_(&n_);
	OBNC_ASSERT(In_Done_, "InTest.obn", 37);
	OBNC_ASSERT(n_ == 37, "InTest.obn", 38);
	In_Real_(&x_);
	OBNC_ASSERT(In_Done_, "InTest.obn", 41);
	OBNC_ASSERT(x_ >= 3.139, "InTest.obn", 42);
	OBNC_ASSERT(x_ <= 3.141, "InTest.obn", 43);
	In_String_(s_, 12);
	OBNC_ASSERT(In_Done_, "InTest.obn", 46);
	OBNC_ASSERT(OBNC_CMP(s_, 12, "foo bar", 8) == 0, "InTest.obn", 47);
	In_Name_(s_, 12);
	OBNC_ASSERT(In_Done_, "InTest.obn", 50);
	OBNC_ASSERT(OBNC_CMP(s_, 12, "foo/bar", 8) == 0, "InTest.obn", 52);
	return 0;
}