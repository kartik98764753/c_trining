#include <stdio.h>
void main()
{
    int a=100;
    int *p=&a;
    printf(" a value is %d", a);
    printf(" a address is ", p);
    printf (" p points to %d", *p);
}
