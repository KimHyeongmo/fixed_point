#define FX_S10_5        ((1<<16)|(10<<8)|(5))

#define FX_POINT        FX_S10_5 //select your environment


#define FX_Q_NUM        (FX_POINT & 0xFF)
#define FX_I_ONE        (1<<FX_Q_NUM)
#define FX_F_ONE        ((float)(FX_I_ONE))
#define FX_D_ONE        ((double)(FX_I_ONE))
#define FX_X_PI         ((float)(3.14159F))
#define FX_X_EXP        ((float)(2.71828F))

#define FX_SIGN		((FX_POINT >> 16) & 0xFF)
#define FX_EXPONENT	((FX_POINT >> 8) & 0xFF)

#if (((FX_SIGN)+(FX_EXPONENT)+(FX_Q_NUM)) == 16)
typedef short fixed;
#endif

#ifndef circulate_c
extern fixed int_sum_s10_5(fixed a,fixed b);
extern fixed int_sub_s10_5(fixed a,fixed b);
extern fixed float_sum_s10_5(fixed a, fixed b);
extern fixed float_sub_s10_5(fixed a, fixed b);
#endif

