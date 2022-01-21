#include <stdio.h>


void sumi(int ia)
{
	ia = ia + ia;
}
	
void sumf(float fa)
{
	fa = fa * fa;
}

int main()
{
	int ia = 1;
	float fa = 1.0;
	for(int i = 0; i<1000000000; i++)
	{
		sumi(ia);
		sumf(fa);
	}

}
