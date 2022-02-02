#include "fx_head.h"

#define FX_POINT        FX_S10_05 //select your environment
#define FX_Q_NUM        (FX_POINT & 0xFF)
#define FX_I_ONE        (1<<FX_Q_NUM)
#define FX_F_ONE        ((float)(FX_I_ONE))
#define FX_D_ONE        ((double)(FX_I_ONE))
#define FX_X_PI         ((float)(3.14159F))
#define FX_X_EXP        ((float)(2.71828F))

#define FX_SIGN		((FX_POINT >> 16) & 0xFF)
#define FX_EXPONENT	((FX_POINT >> 8) & 0xFF)

#define FX_Q_NUM_HALF   (FX_Q_NUM>>1)
#define FX_Q_NUM_HALF_LEFT      (FX_Q_NUM-FX_Q_NUM_HALF)
#define FX_Q_NUM_MINUS_TWO_HALF	(FX_Q_NUM - (2*FX_Q_NUM_HALF))

#define FX_Q_NUM_QUATER	(FX_Q_NUM>>2)
#define FX_Q_NUM_QUATER_LEFT	(FX_Q_NUM-FX_Q_NUM_QUATER)
#define FX_Q_NUM_MINUS_TWO_QUATER	(FX_Q_NUM - (2*FX_Q_NUM_QUATER))


#if (FX_POINT == FX_S10_05)
typedef short fixed;
#define Q_2_5	32
#define R_F_Q_2_5	1.0f/32.0f
#endif


