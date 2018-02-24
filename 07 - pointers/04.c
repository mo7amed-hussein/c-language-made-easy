/*
 Filename : 07 - pointers /04.c
Description : print array via pointers
*/
#include<stdio.h>
#include<string.h>

int main()
{
   //char array
   char str[] = "string again";
    //char pointer
    char *ptr = &str[0];
    //string length
    int len = strlen(str);
    //loop counter
    int i ;
    //print using puts function
    puts(str);
    //print using pointer
    for(i=0 ; i<len ;i++)
    {
        printf("%c", *(ptr+i));
    }



	return 0;
}

