#include <stdio.h>
#include "test.h"

void add(fixed input)
{
	int_sum_s10_5(input,input);
	float_sum_s10_5(input,input);
	longlong_sum_s10_5(input,input);
	double_sum_s10_5(input,input);
}

void sub(fixed input)
{
	int_sub_s10_5(input,input);
	float_sub_s10_5(input,input);
	longlong_sub_s10_5(input,input);
	double_sub_s10_5(input,input);
}

void mul(fixed input)
{
	int_mul1_s10_5(input,input);	
	int_mul2_s10_5(input,input);	
	int_mul3_s10_5(input,input);	
	int_mul4_s10_5(input,input);	
	float_mul1_s10_5(input,input);	
	longlong_mul1_s10_5(input,input);	
	longlong_mul2_s10_5(input,input);	
	longlong_mul3_s10_5(input,input);	
	longlong_mul4_s10_5(input,input);	
	double_mul1_s10_5(input,input);	
}

void div(fixed input)
{
	int_div1_s10_5(input,input);
	int_div2_s10_5(input,input);
	int_div3_s10_5(input,input);
//	int_div4_s10_5(input,input);
//	int_div5_s10_5(input,input);
	float_div1_s10_5(input,input);
	longlong_div1_s10_5(input,input);
	longlong_div2_s10_5(input,input);
	longlong_div3_s10_5(input,input);
//	longlong_div4_s10_5(input,input);
//	longlong_div5_s10_5(input,input);
	double_div1_s10_5(input,input);
}

int main()
{
	fixed input1, input2;
	double output1;
	double input = -1024;
	
	for(int i = 0;i<1000;i++)
	{
		input = -1024;
		while(input < 1024)
		{
			if(input == 0)
			{
				input += 0.03125;
				continue;
			}
			input1 = double_to_fixed(input);
			add(input1);
			sub(input1);
			mul(input1);
			div(input1);			
			input += 0.03125;
		}
	}

}

