//create a structure with varibales name of the  cars,max speed,price, store these in a arry in structure and display them,
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car 
{

    char name [100];
    int max_speed[100];
    int price;
};
void main()
{
    int n;
     printf("enter number of car:");
     scanf("%d", &n);
     struct car b[n];
     for(int i =0; i<n; i++)
{
 printf(" enter name of car:");
    scanf("%s", b[i].name);

     
    printf("enter of max_speed:");
    scanf("%d", &b[i].max_speed);

    printf("enter the price of the car");
     scanf("%d",&b[i].price);
}
}
