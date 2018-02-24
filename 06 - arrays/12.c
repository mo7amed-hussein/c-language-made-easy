/*
 Filename : 06 - arrays /11.c
Description :  scanf
*/
#include<stdio.h>
#include<string.h>

int main()
{
    //name string
    char str [255];
    //ask user to type his name
    printf("type your full name : ");
    //get user name
    gets(str);
    //print it
    printf("your name is  : %s \n",str);

	return 0;
}

