/*
 Filename : 12 - advanced functions and pointers/01.c
Description : factorial without recursion
*/
#include<stdio.h>

//declare fact function
int fact(int n);

int main()
{
   printf("4! = %d \n", fact(4));
   printf("6!  = %d \n", fact(6));

   return 0;
}
int fact(int n)
{

    if (n == 0 || n== 1)
    {
        return 1;
    }
    else
    {
        int result =1;
        while(n)
        {
          result *=n;
          n--;
        }
        return result;
    }
}
