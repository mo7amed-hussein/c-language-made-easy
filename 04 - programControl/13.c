/*
 Filename : 04 - programControl /13.c
Description : do while loop
*/
#include<stdio.h>

int main()
{
    //to store key from user
    char ch;

    do
    {
        //ask user to enter key
        printf(" \npress any key , q to exit  : ");
        //empty input buffer
        fflush(stdin);
        //get key form user
        scanf("%c",&ch);
        //print user key
        printf("\nyour key is %c\n",ch);
    }
    while(ch != 'q');//check for condition

    printf("\nprogram terminated .... \n");

	return 0;
}

