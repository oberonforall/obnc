/*GENERATED BY OBNC 0.8.4*/

#include "/home/gunter/GM_LANGUAGES/OBERON/V_07/OBNC/obnc-0.8.4/lib/obnc/OBNC_.h"
#include "Math.h"

int main(int argc, char *argv[])
{
	OBNC_Initialize(argc, argv);
	Math_Init();
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sqrt_(1.0) - 1.0) < 0.01, "MathTest.obn", 26);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sqrt_(4.0) - 2.0) < 0.01, "MathTest.obn", 27);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_power_(0.0, 1.0) - 0.0) < 0.01, "MathTest.obn", 29);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_power_(1.0, 0.0) - 1.0) < 0.01, "MathTest.obn", 30);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_power_(2.0, 3.0) - 8.0) < 0.01, "MathTest.obn", 31);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_power_(2.0, -3.0) - 0.125) < 0.01, "MathTest.obn", 32);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_exp_(0.0) - 1.0) < 0.01, "MathTest.obn", 34);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_exp_(1.0) - 2.71828182845905) < 0.01, "MathTest.obn", 35);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_exp_(2.0) - 7.38905609893068) < 0.01, "MathTest.obn", 36);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_exp_(-2.0) - 0.135335283236612) < 0.01, "MathTest.obn", 37);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_ln_(1.0) - 0.0) < 0.01, "MathTest.obn", 39);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_ln_(2.71828182845905) - 1.0) < 0.01, "MathTest.obn", 40);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_ln_(7.38905609893068) - 2.0) < 0.01, "MathTest.obn", 41);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_log_(1.0, 2.0) - 0.0) < 0.01, "MathTest.obn", 43);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_log_(2.71828182845905, 2.71828182845905) - 1.0) < 0.01, "MathTest.obn", 44);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_log_(100.0, 10.0) - 2.0) < 0.01, "MathTest.obn", 45);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_round_(0.4) - 0.0) < 0.01, "MathTest.obn", 47);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_round_(-0.4) - 0.0) < 0.01, "MathTest.obn", 48);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_round_(0.6) - 1.0) < 0.01, "MathTest.obn", 49);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_round_(-0.6) - -1.0) < 0.01, "MathTest.obn", 50);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sin_(0.0) - 0.0) < 0.01, "MathTest.obn", 52);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sin_(0.523598775598298) - 0.5) < 0.01, "MathTest.obn", 53);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sin_(1.5707963267949) - 1.0) < 0.01, "MathTest.obn", 54);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_cos_(0.0) - 1.0) < 0.01, "MathTest.obn", 56);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_cos_(1.0471975511966) - 0.5) < 0.01, "MathTest.obn", 57);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_cos_(1.5707963267949) - 0.0) < 0.01, "MathTest.obn", 58);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_tan_(0.0) - 0.0) < 0.01, "MathTest.obn", 60);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_tan_(0.785398163397448) - 1.0) < 0.01, "MathTest.obn", 61);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arcsin_(0.0) - 0.0) < 0.01, "MathTest.obn", 63);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arcsin_(0.5) - 0.523598775598298) < 0.01, "MathTest.obn", 64);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arcsin_(1.0) - 1.5707963267949) < 0.01, "MathTest.obn", 65);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arccos_(1.0) - 0.0) < 0.01, "MathTest.obn", 67);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arccos_(0.5) - 1.0471975511966) < 0.01, "MathTest.obn", 68);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arccos_(0.0) - 1.5707963267949) < 0.01, "MathTest.obn", 69);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctan_(0.0) - 0.0) < 0.01, "MathTest.obn", 71);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctan_(1.0) - 0.785398163397448) < 0.01, "MathTest.obn", 72);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctan2_(0.0, 2.0) - 0.0) < 0.01, "MathTest.obn", 74);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctan2_(2.0, 2.0) - 0.785398163397448) < 0.01, "MathTest.obn", 75);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sinh_(0.0) - 0.0) < 0.01, "MathTest.obn", 77);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_sinh_(1.0) - 1.1752011936438) < 0.01, "MathTest.obn", 78);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_cosh_(0.0) - 1.0) < 0.01, "MathTest.obn", 80);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_cosh_(1.0) - 1.54308063481525) < 0.01, "MathTest.obn", 81);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_tanh_(0.0) - 0.0) < 0.01, "MathTest.obn", 83);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_tanh_(1.0) - 0.761594155955766) < 0.01, "MathTest.obn", 84);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arcsinh_(0.0) - 0.0) < 0.01, "MathTest.obn", 86);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arcsinh_(1.1752011936438) - 1.0) < 0.01, "MathTest.obn", 87);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arccosh_(1.0) - 0.0) < 0.01, "MathTest.obn", 89);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arccosh_(1.54308063481525) - 1.0) < 0.01, "MathTest.obn", 90);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctanh_(0.0) - 0.0) < 0.01, "MathTest.obn", 92);
	OBNC_ASSERT(OBNC_ABS_FLT(Math_arctanh_(0.761594155955766) - 1.0) < 0.01, "MathTest.obn", 94);
	return 0;
}