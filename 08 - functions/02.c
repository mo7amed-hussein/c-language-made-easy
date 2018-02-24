/*
 Filename : 08 - functions /02.c
Description : add function
*/
#include<stdio.h>

//function prototype
int add(int first,int second);

int main()
{
    int num1 = 20 ,num2 = 40,result;

    //call with constant values
    printf("result of 13 + 46 = %d \n", add( 13 , 46 ) );
    //call with variable
    result = add(num1,num2);
    printf("result of %d + %d = %d \n",num1,num2,result);

	return 0;
}

int add(int first,int second)
{
    //add two numbers
    int sum = first + second ;
    //return addition result
    return sum;
}
