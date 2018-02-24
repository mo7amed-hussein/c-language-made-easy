/*
 Filename : 12 - advanced functions and pointers/01.c
Description : Fibonacci  with recursion
*/
#include<stdio.h>

//declare fact function
int fab(unsigned int nth);

int main()
{
   //print the first 10 elements in series
   int i;
   for(i =0 ; i<10 ; i++)
   {
       printf("%d ",fab(i) );
   }

   return 0;
}

int fab(unsigned int nth)
{
    if (nth == 0  || nth== 1)
    {
        return 1;
    }
    else
    {
        return  fab(nth-1) + fab(nth-2) ;
    }
}
