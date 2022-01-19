#include <stdio.h>
#include "circum.h"

//fixed(short)

void int_calculate()
{	
	int input1, input2;
	int output1, output2;
	fscanf(stdin,"%d %d",&input1,&input2);
	output1 = int_sum_using_S10_5(input1, input2);
	output2 = int_sub_using_S10_5(input1, input2);
	printf("int sum using s10_s5 : %d\nint sub using s10_s5 : %d\n",output1,output2);
}

void float_calculate()
{
	float input1, input2;
	float output1, output2;
	fscanf(stdin,"%f %f",&input1,&input2);
	output1 = float_sum_using_S10_5(input1, input2);
	output2 = float_sub_using_S10_5(input1, input2);
	printf("float sum using s10_s5 : %f\nfloat sub using s10_s5 : %f\n",output1,output2);
}

int main()
{
	int_calculate();
	float_calculate();
}
