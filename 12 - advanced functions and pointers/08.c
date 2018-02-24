/*
 Filename : 12 - advanced functions and pointers/01.c
Description : pointer to function
*/
#include<stdio.h>
#include<stdlib.h>
//declare function prototype
int add(int,int);
int sub(int,int);
int calc(int , int , int (*func)(int,int) );

int main()
{
    //pointer to function of type int and take 2 parameter of type int also
   int (*ptr)(int,int);
    //assign add function to ptr
   ptr = add;

   printf(" 10 + 4 = %d \n",calc(10,4,ptr));
    //assign sub function to ptr
    ptr =sub;
     printf(" 10 - 4 = %d \n",calc(10,4,ptr));
   return 0;
}

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int calc(int  a, int b, int (*func)(int,int) )
{
    return func(a,b);
}
