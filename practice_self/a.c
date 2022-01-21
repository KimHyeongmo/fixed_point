#include <stdio.h>
#include "circum.h"

//fixed(short)

#define Q_2_5	32
#define R_F_Q_2_5 1.0f/32.0f

fixed double_to_fixed(double da)
{
	fixed a;
	a = (fixed)(da * Q_2_5);
	return a;
}

double fixed_to_double(fixed fa)
{
	double a;
	a = ((double)fa * R_F_Q_2_5);
	return a;
}

void int_calculate()
{	
	fixed input1, input2;
	double output1, output2;
	double inputa, inputb;

	fscanf(stdin,"%lf %lf",&inputa,&inputb);

	input1 = double_to_fixed(inputa);
	input2 = double_to_fixed(inputb);

	output1 = fixed_to_double(int_sum_s10_5(input1, input2));
	output2 = fixed_to_double(int_sub_s10_5(input1, input2));
	printf("int sum : %lf\nint sub : %lf\n",output1,output2);
}

void float_calculate()
{
	fixed input1, input2;
	double output1, output2;
	double inputa, inputb;

	fscanf(stdin,"%lf %lf",&inputa,&inputb);

	input1 = double_to_fixed(inputa);
	input2 = double_to_fixed(inputb);

	output1 = fixed_to_double(float_sum_s10_5(input1, input2));
	output2 = fixed_to_double(float_sub_s10_5(input1, input2));
	printf("float sum : %lf\nfloat sub : %lf\n",output1,output2);
}



int main()
{
	int_calculate();
	printf("next operation\n");
	float_calculate();
}

