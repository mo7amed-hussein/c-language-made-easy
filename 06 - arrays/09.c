/*
 Filename : 06 - arrays /08.c
Description :  reverse string
*/
#include<stdio.h>
#include<string.h>

int main()
{
    //string
    char str [100] ;

    //chars counters
    int count ;

    //ask user to type his first name
    printf("Your first name :  ");

    //get user name
    scanf("%s",str);

    //use string length function to get string length
    count = strlen(str);

    //print string in reverse order
    while(count--)
    {
        printf("%c",str[count]);
    }

	return 0;
}

