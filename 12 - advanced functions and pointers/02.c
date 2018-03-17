/*
 Filename : 12 - advanced functions and pointers/02.c
Description : factorial with recursion
*/
#include<stdio.h>

//declare fact function
int fact(int n);

int main()
{
   printf("4! = %d \n", fact(4));
   printf("6! = %d \n", fact(6));

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
        return  n*fact(n-1);
    }
}
