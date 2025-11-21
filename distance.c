//c program to calucalate distane betwen two points
//x1,x2 , x2,y2
//sqrt(x2-x1^2 + y2-y1^2)
#include <stdio.h>
#include <math.h>
void main ()
{
    int x1,y1 ,x2 ,y2;
    printf("enter the values of x1,x2:");
    scanf("%d%d",&x1,&y1);
    printf("enter the values of x2,x2:");
    scanf("%d%d",&x2,&y2);
    int d1 = x2-x1;
    int d2 = y2-y1;
    double dist= sqrt ((d1*d2)+(d2*d2));
    printf("distance is %lf",dist);
}