/*
 Filename : 05 - practical examples /count_digits.c
Description : count digits in any positive number
*/
#include<stdio.h>

int main()
{
   //number
   unsigned int num ;
   //ones counter
   int count=0;
   //ask user to type number
    printf("please type number : \t");
    //get number
    scanf("%d",&num);

    //loop until num =0
    while(num != 0)
    {

            count++;
    //divide number by 10
        num /=10;
    }
    printf("number of digits is %d \n",count);
	return 0;
}

