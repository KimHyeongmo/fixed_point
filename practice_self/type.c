#include <stdio.h>


void sumi(int ia)
{
	ia = 1 * 1;
}
	
void sumf(float fa)
{
	fa = 1.0 * 1.0;
}

int main()
{
	int ia = 0;
	float fa = 0.0;
	for(int i = 0;i<1000000000;i++)
	{
		sumi(ia);
		sumf(fa);
	}

}
