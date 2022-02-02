#include <stdio.h>
#include "fixed_point_for_s10_5.h"

//fixed-int switch function

fixed int_to_fixed(int ia)
{
	return (fixed)(ia << FX_Q_NUM);
}

int fixed_to_int(fixed fa)
{
	return (int)(fa >> FX_Q_NUM);
}

//fixed-float switch function

fixed float_to_fixed(float Fa)
{
	return (fixed)(Fa * Q_2_5);
}

float fixed_to_float(fixed fa)
{
	return (float)((float)(fa) * R_F_Q_2_5);
}

//fixed-double switch function

fixed double_to_fixed(float


//fixed-longlong switch function




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


