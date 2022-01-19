#include <stdio.h>

#define circulate_c

#include "circum.h"

#if (FX_POINT == FX_S10_5)
#define Q_2_5	32
#endif


fixed int_to_fixed(int ia)
{
	return (fixed)(ia << FX_Q_NUM);
}

int fixed_to_int(fixed fa)
{
	return (int)(fa >> FX_Q_NUM);
}

fixed float_to_fixed(float Fa)
{
	return (fixed)(Fa * Q_2_5);
}

float fixed_to_float(fixed fa)
{
	return (float)((float)(fa) / Q_2_5);
}

int int_sum_using_S10_5(int a, int b)
{
	return fixed_to_int((int_to_fixed(a)+int_to_fixed(b)));
}

int int_sub_using_S10_5(int a, int b)
{
	return fixed_to_int((int_to_fixed(a)-int_to_fixed(b)));
}

float float_sum_using_S10_5(float a, float b)
{
	return fixed_to_float((float_to_fixed(a)+float_to_fixed(b)));
}

float float_sub_using_S10_5(float a, float b)
{
	return fixed_to_float((float_to_fixed(a)-float_to_fixed(b)));
}


