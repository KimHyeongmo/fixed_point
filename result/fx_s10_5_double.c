#include "fx_s10_5_double.h"	


fixed double_to_fixed(double da)
{
        return (fixed)(da * Q_2_5);
}

double fixed_to_double(fixed fa)
{
        return (double)((double)(fa) * R_F_Q_2_5);
}

fixed double_sum_s10_5(fixed fa, fixed fb)
{
        return double_to_fixed((fixed_to_double(fa)+fixed_to_double(fb)));
}

fixed double_sub_s10_5(fixed fa, fixed fb)
{
        return double_to_fixed((fixed_to_double(fa)-fixed_to_double(fb)));
}

//mul function

fixed double_mul1_s10_5(fixed fa, fixed fb)
{
        return double_to_fixed((fixed_to_double(fa)*fixed_to_double(fb)));
}

//divide
fixed double_div1_s10_5(fixed fa, fixed fb)
{
        return double_to_fixed((fixed_to_double(fa)/fixed_to_double(fb)));
}
