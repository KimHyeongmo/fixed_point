#include "fx_s10_5_float.h"	


fixed float_to_fixed(float Fa)
{
        return (fixed)(Fa * Q_2_5);
}

float fixed_to_float(fixed fa)
{
        return (float)((float)(fa) * R_F_Q_2_5);
}

fixed float_sum_s10_5(fixed fa, fixed fb)
{
        return float_to_fixed((fixed_to_float(fa)+fixed_to_float(fb)));
}

fixed float_sub_s10_5(fixed fa, fixed fb)
{
        return float_to_fixed((fixed_to_float(fa)-fixed_to_float(fb)));
}

//mul function

fixed float_mul1_s10_5(fixed fa, fixed fb)
{
        return float_to_fixed((fixed_to_float(fa)*fixed_to_float(fb)));
}

//divide
fixed float_div1_s10_5(fixed fa, fixed fb)
{
        return float_to_fixed((fixed_to_float(fa)/fixed_to_float(fb)));
}
