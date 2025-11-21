#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p =(int *)malloc(3*sizeof(int));
    p[0]=13;
    p[1]=78;
    p[2]=58;

    p =(int*)realloc(p, 5*sizeof(int));
    p[3]=57;
    p[4]=87;
    for (int i =0; i<5; i++)
    {
        printf("%d ", p[i]);
    }
    free (p);
}