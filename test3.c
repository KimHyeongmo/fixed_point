#include <stdio.h>

#define FLOAT_TO_INT

#include "sqrt.h"


void float_to_int(float a)
{
	int b;

        memcpy(&b, &a, sizeof(a));

        int i;
        int e;
        unsigned int m;
        i = b >> 31;
        e = (b >> 23) & 255;
	m = b << 9;
        m >>= 9;
        printf("i : %d / e : %d / m : %d\n",i,e,m);

        for (int u = 22; u >= 0; u--)
        {
                fprintf(stdout,"%d", ((m >> u) & 1));
                if(u%4 == 0)
                        fprintf(stdout," ");
        }
        fprintf(stdout, "\n");

}



