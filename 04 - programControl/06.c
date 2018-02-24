/*
 Filename : 04 - programControl /06.c
Description : nested if statement
*/
#include<stdio.h>

int main()
{
    int num = 200 ;

    if (num <= 100)
    {
        //nested if
         if( (num % 2) == 0)
        {
            printf("number is even\n");
        }
        else
        {
            printf("number is odd\n");
        }

    }
    else
    {
        printf("number is greater than 100");
    }

	return 0;
}

