#include <stdio.h>

int main()
{
	long long  i=0; 
	double a = 1000000000.0f; 
	for ( i = 0; i < 1000000 ; i++)
	{
		a += 0.000001; 
	}
	printf("%lf \n", a); 
}
