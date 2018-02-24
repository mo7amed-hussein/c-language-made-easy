/*
 Filename : 04 - programControl /07.c
Description : scanf
*/
#include<stdio.h>

int main()
{
    //to save user input
    int value;

    //ask user to type value
    printf("please insert your value  : ");
    //get user value
    scanf("%d",&value);
    //print user value
    printf("your value is %d",value);

	return 0;
}

