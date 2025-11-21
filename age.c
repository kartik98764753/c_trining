#include <stdio.h>
void main ()
{
    int age;
    printf("entre age:");
    scanf("%d", &age);
    float hig;
    printf("enter hig:");
    scanf("%f",&hig);
    if((age>12) && (hig>4.5))
    {
        printf("you can rede the roller coaster!");
    }
    else
    {
        printf("grow up and come back!");
    }
}