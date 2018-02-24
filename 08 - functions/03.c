/*
 Filename : 08 - functions /02.c
Description : isEven function
*/
#include<stdio.h>

//function prototype
int isEven(int);

int main()
{
    int number =30;

    if( isEven(number) )
    {
        printf("%d is even\n",number);

    }
    else
    {
        printf("%d is odd\n",number);
    }

	return 0;
}

int isEven(int num)
{
    if(num%2)
    {
        //number is odd
        return 0;
    }
    else
    {
        //number is even
        return 1;
    }
}

