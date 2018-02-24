/*
 Filename : 05 - practical examples /factorial.c
Description : calculate factorial
*/
#include<stdio.h>

int main()
{
    //number
    unsigned int num;
    //factorial value
    unsigned int fact = 1;
    //loop counter
    int i;

    //ask user to enter number
    printf("please type number :\t");
    //get the number
    scanf("%d",&num);

    for(i = num ; i > 0 ; i--)
    {
        //check if value is 0 or 1
        if(num == 1 || num == 0)
        {
            fact =1;
            break;
        }
        //multiply by current i
        fact *= i ;
    }

    printf("factorial of %d is %d\n",num,fact);

	return 0;
}

