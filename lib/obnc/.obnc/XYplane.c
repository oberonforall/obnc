/*GENERATED BY OBNC 0.8.4*/

#include "XYplane.h"
#include "Input.h"

int XYplane_X_, XYplane_Y_;

int XYplane_W_, XYplane_H_;

void XYplane_Open_(void)
{
}


void XYplane_Clear_(void)
{
}


void XYplane_Dot_(int x_, int y_, int mode_)
{
}


int XYplane_IsDot_(int x_, int y_)
{
	return 0;
}


char XYplane_Key_(void)
{
	return '\x0';
}


void XYplane_Init(void)
{
	static int initialized = 0;

	if (! initialized) {
		Input_Init();
		initialized = 1;
	}
}