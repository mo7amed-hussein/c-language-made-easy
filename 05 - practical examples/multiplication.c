/*
 Filename : 05 - practical examples /multiplication.c
Description : multiplication table
*/
#include<stdio.h>

int main()
{
    //number
    unsigned int num;
    //loop counter
    int i;

    //ask user to enter number
    printf("please type number :\t");
    //get the number
    scanf("%d",&num);

    for(i = 1 ; i <= 10 ; i++)
    {
       printf("%d * %2d = %d \n",num , i , num*i);
    }

	return 0;
}

