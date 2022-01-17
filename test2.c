#include <stdio.h>
#include <math.h>

// #### #### #### #### . #### #### #### #### : 32bit
// S 15 . 16 model

#define FX_Q_NUM 16

main()
{
	int ia;
	float fa;


	fscanf(stdin,"%d",&ia);
	fprintf(stdout,"%d : %d %d\n", 2, 16, 2^16);
	fprintf(stdout,"%d : %f %f\n", ia, (float) ia, (float) ia * powf(2.0f, -16));
	fscanf(stdin,"%f",&fa);
}
