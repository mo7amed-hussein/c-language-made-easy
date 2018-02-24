/*
 Filename : 05 - practical examples /reverse_digits.c
Description : reverse digits in any positive number
*/
#include<stdio.h>

int main()
{
   //number
   unsigned int num ;
   //summation
   int newNum=0;
   //shift value
   int shift =1 ;
   //ask user to type number
    printf("please type number : \t");
    //get number
    scanf("%d",&num);

    //loop until num =0
    while(num != 0)
    {
        //shift to left by one digit
            newNum *= shift;
            //add new digit
            newNum += (num % 10 ) ;
            //increase shift
            shift =10;
    //divide number by 10
        num /=10;
    }
    printf("reverse of digits is %d \n",newNum);
	return 0;
}

