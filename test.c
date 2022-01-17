#include <stdio.h>
#include <math.h>

// #### #### #### #### . #### #### #### #### : 32bit
// S 15 . 16 model

#define FX_Q_NUM 16
#define FX_2_NINUS 1.52587890625e-05 //2^-16

main()
{
	int ia;
	int ib;
	float fa;


	fscanf(stdin,"%d %d",&ia,&ib);
	fprintf(stdout,"%d : %f %f\n", ia, (float) ia, (float) ia * powf(2.0f, -16));
	fprintf(stdout,"%d : %f %f\n", ib, (float) ib, (float) ib * powf(2.0f, -16));
	//fprintf(stdout,"%f : %d %d\n", fa, (int) fa,  (int) (fa * powf(2.0f, 16)));
	int ic;
	ic = ib * ia;
	fprintf(stdout,"%d : %f %f\n", ic, (float) ic, (float) ic * powf(2.0f, -16));
	ic >>= 16;
	fprintf(stdout,"%d : %f %f\n", ic, (float) ic, (float) ic * powf(2.0f, -16));


}
