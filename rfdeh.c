#include <stdio.h>
#include <stdlib.h>
void main ()
{
    float *p = (float*)calloc(4,sizeof(float));
    p[0]=76.7;
    p[1]=87.9;
    p[2]=34.7;
    p[3]=420.6;
    p[4]=657.5;
    printf("%d",p[0]);
    free(p);
}