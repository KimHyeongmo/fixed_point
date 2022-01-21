#include <stdio.h>

#define circulate_c

#include "circum.h"

#if (FX_POINT == FX_S10_5)
#define Q_2_5	32
#define R_F_Q_2_5	1.0f/32.0f
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
	return (float)((float)(fa) * R_F_Q_2_5);
}

fixed int_sum_s10_5(fixed fa, fixed fb)
{
	return int_to_fixed((fixed_to_int(fa)+fixed_to_int(fb)));
}

fixed int_sub_s10_5(fixed fa, fixed fb)
{
	return int_to_fixed((fixed_to_int(fa)-fixed_to_int(fb)));
}

fixed float_sum_s10_5(fixed fa, fixed fb)
{
	return float_to_fixed((fixed_to_float(fa)+fixed_to_float(fb)));
}

fixed float_sub_s10_5(fixed fa, fixed fb)
{
	return float_to_fixed((fixed_to_float(fa)-fixed_to_float(fb)));
}


