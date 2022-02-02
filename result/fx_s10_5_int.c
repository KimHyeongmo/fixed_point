#include "fx_s10_5_int.h"	


fixed int_to_fixed(int ia)
{
        return (fixed)(ia << FX_Q_NUM);
}

int fixed_to_int(fixed fa)
{
        return (int)(fa >> FX_Q_NUM);
}

fixed int_sum_s10_5(fixed fa, fixed fb)
{
        return (fixed)((int)fa+(int)fb);
}

fixed int_sub_s10_5(fixed fa, fixed fb)
{
        return (fixed)((int)fa-(int)fb);
}

//mul function

fixed int_mul1_s10_5(fixed fa, fixed fb)
{
        return (fixed)(((int)fa*(int)fb) >> FX_Q_NUM);
}

fixed int_mul2_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((int)fa >> FX_Q_NUM_HALF_LEFT) * ((int)fb >> FX_Q_NUM_HALF));
}

fixed int_mul3_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((int)fa >> FX_Q_NUM_QUATER_LEFT) * ((int)fb >> FX_Q_NUM_QUATER));
}

fixed int_mul4_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((int)fa >> FX_Q_NUM_QUATER) * ((int)fb >> FX_Q_NUM_QUATER)) >> FX_Q_NUM_MINUS_TWO_QUATER);
}

//divide. WARNING about dividing 0! For using 4,5,6 divide function
fixed int_div1_s10_5(fixed fa, fixed fb)
{
        return (fixed)(((int)fa / (int)fb) << FX_Q_NUM);
}

fixed int_div2_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((int)fa << FX_Q_NUM_HALF_LEFT) / (int)fb) << FX_Q_NUM_HALF);
}

fixed int_div3_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((int)fa << FX_Q_NUM_QUATER_LEFT) / (int)fb) << FX_Q_NUM_QUATER);
}

/*
fixed int_div4_s10_5(fixed fa, fixed fb)
{
	return (fixed)((int)fa / ((int)fb >> FX_Q_NUM));
}

fixed int_div5_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((int)fa << FX_Q_NUM_HALF_LEFT) / ((int)fb >> FX_Q_NUM_HALF));
}
*/
