/*
 Filename : 05 - practical examples /sum_digits.c
Description : sum digits in any positive number
*/
#include<stdio.h>

int main()
{
   //number
   unsigned int num ;
   //summation
   int sum=0;
   //ask user to type number
    printf("please type number : \t");
    //get number
    scanf("%d",&num);

    //loop until num =0
    while(num != 0)
    {

            sum += (num % 10 ) ;
    //divide number by 10
        num /=10;
    }
    printf("sum of digits is %d \n",sum);
	return 0;
}

