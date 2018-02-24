/*
 Filename : 12 - advanced functions and pointers/01.c
Description : pointer to function
*/
#include<stdio.h>
#include<stdlib.h>
//declare function prototype
int add(int,int);

int main()
{
    //pointer to function of type int and take 2 parameter of type int also
   int (*ptr)(int,int);

   ptr = add;

   printf(" 10 + 4 = %d \n",ptr(10,4));

   return 0;
}

int add(int a,int b)
{
    return a+b;
}
