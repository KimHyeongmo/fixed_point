#include "fx_s10_5_longlong.h"	


fixed longlong_to_fixed(long long la)
{
        return (fixed)(la << FX_Q_NUM);
}

long long fixed_to_longlong(fixed fa)
{
        return (long long)(fa >> FX_Q_NUM);
}

fixed longlong_sum_s10_5(fixed fa, fixed fb)
{
        return (fixed)((long long)fa+(long long)fb);
}

fixed longlong_sub_s10_5(fixed fa, fixed fb)
{
        return (fixed)((long long)fa-(long long)fb);
}

//mul function

fixed longlong_mul1_s10_5(fixed fa, fixed fb)
{
        return (fixed)(((long long)fa*(long long)fb) >> FX_Q_NUM);
}

fixed longlong_mul2_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((long long)fa >> FX_Q_NUM_HALF_LEFT) * ((long long)fb >> FX_Q_NUM_HALF));
}

fixed longlong_mul3_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((long long)fa >> FX_Q_NUM_QUATER_LEFT) * ((long long)fb >> FX_Q_NUM_QUATER));
}

fixed longlong_mul4_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((long long)fa >> FX_Q_NUM_QUATER) * ((long long)fb >> FX_Q_NUM_QUATER)) >> FX_Q_NUM_MINUS_TWO_QUATER);
}

//divide. WARNING about dividing 0! For using 4,5,6 divide function
fixed longlong_div1_s10_5(fixed fa, fixed fb)
{
        return (fixed)(((long long)fa / (long long)fb) << FX_Q_NUM);
}

fixed longlong_div2_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((long long)fa << FX_Q_NUM_HALF_LEFT) / (long long)fb) << FX_Q_NUM_HALF);
}

fixed longlong_div3_s10_5(fixed fa, fixed fb)
{
	return (fixed)((((long long)fa << FX_Q_NUM_QUATER_LEFT) / (long long)fb) << FX_Q_NUM_QUATER);
}
/*
fixed longlong_div4_s10_5(fixed fa, fixed fb)
{
	return (fixed)((long long)fa / ((long long)fb >> FX_Q_NUM));
}

fixed longlong_div5_s10_5(fixed fa, fixed fb)
{
	return (fixed)(((long long)fa << FX_Q_NUM_HALF_LEFT) / ((long long)fb >> FX_Q_NUM_HALF));
}
*/
