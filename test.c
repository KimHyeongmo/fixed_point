#include <stdio.h>
#include <math.h>

// #### #### #### #### . #### #### #### #### : 32bit
// S 15 . 16 model

#define FX_Q_NUM 16
#define FX_2_MINUS_16 1.52587890625e-05F //2^-16
#define FX_2_PLUS_16 65536 //(1<<16)으로 쓰는 것과 성능 차이 없음
#define FX_S_15_16 11516 //(S/15bit/16bit)
#define FX_SYSTEM FX_S_15_16

typedef int fixed32;

fixed32 fromFloat(float fa)
{
	return (fixed32) (fa * FX_2_PLUS_16);
}

float toFloat(fixed32 xa)
{
	return ((float) (xa)) * FX_2_MINUS_16;
}

fixed32 fxAdd(fixed32 a, fixed32 b)
{
	return fromFloat((toFloat(a) + toFloat(b)));
}

fixed32 fxAdd2(fixed32 a, fixed32 b)
{
	return a+b;
}

int main()
{
	int ia;
	int ib;
	int ic, ic2;
	float fa;
	
//	fscanf(stdin,"%d %d",&ia,&ib);
	for(long long i = 0; i < (long long) 256*256*256*256 ; i+=(256*256))
	{
		ic = fxAdd(i,i);
		ic2 = fxAdd2(i,i);
		fprintf(stdout,"%f + %f : %f, %f diff = %d\n", toFloat(i), toFloat(i), toFloat(ic), toFloat(ic2), ic-ic2);
	}
	//fprintf(stdout,"%d + %d : %d\n",ia, ib, ic);
	//fscanf(stdin,"%f",&fa);
	//fscanf(stdin,"%d %d",&ia,&ib);
	//fprintf(stdout,"%d : %f %f\n", ia, (float) ia, (float) ia * powf(2.0f, -16));
	//fprintf(stdout,"%d : %f %f\n", ib, (float) ib, (float) ib * powf(2.0f, -16));
	//fprintf(stdout,"%f : %d %d\n", fa, (int) fa,  (int) (fa * powf(2.0f, 16)));
	//int ic;
	//ic = ib * ia;
	//fprintf(stdout,"%d : %f %f\n", ic, (float) ic, (float) ic * powf(2.0f, -16));
	//ic >>= 16;
	//fprintf(stdout,"%d : %f %f\n", ic, (float) ic, (float) ic * powf(2.0f, -16));


}
