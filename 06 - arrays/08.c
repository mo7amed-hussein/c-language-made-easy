/*
 Filename : 06 - arrays /08.c
Description :  string input
*/
#include<stdio.h>

int main()
{
    //string
    char str [100] ;

    //chars counters
    int count =0;

    //ask user to type his first name
    printf("Your first name :  ");

    //get user name
    scanf("%s",str);

    //count characters
    while(str[count] != '\0')
    {
        count++;
    }

    printf("%s contain %d characters \n",str,count);

	return 0;
}

