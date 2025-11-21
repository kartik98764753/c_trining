#include <stdio.h>
#include <stdarg.h>
void add (int count,...)
{
    int result =0 ;
    va_list bag;
    va_start(bag, count);
     for (int i=1; i<=count; i++) 

     {
     int n= va_arg(bag, int);
    result =result + n;
     }
  
     va_end(bag);
     printf("%d", result);

  }
void main()
{
        add ( 5, 7, 8, 5, 4, 3);
}
