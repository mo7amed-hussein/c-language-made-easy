/*
 Filename : 07 - pointers /05.c
Description : array as pointers
*/
#include<stdio.h>
#include<string.h>

int main()
{
   //char array
   char str[] = "have fun";
    //string length
    int len = strlen(str);
    //loop counter
    int i ;

    printf("&str[i]        (str+i)     str[i]\n");

    for(i=0 ; i<len ;i++)
    {
        printf("ox%p    ox%p     %c\n" , &str[i] , (str+i) ,str[i]);
    }

	return 0;
}

