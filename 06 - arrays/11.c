/*
 Filename : 06 - arrays /11.c
Description :  string delimiter
*/
#include<stdio.h>
#include<string.h>

int main()
{
    //string
    char str [] ={"mohamed#ali#omar#reda"} ;

    //delimiter
    char delimiter = '#';
    //chars counters
    int count ;

    //use string length function to get string length
    count = strlen(str);

    //loop counter
    int i;

    printf("string is  : %s \n",str);

    //loop and print char or skip if delimiter found
   for(i=0 ; i<count ;i++)
   {
       //check for delimiter ,if skip the rest
       if(str[i]==delimiter)
       {
           //add new line for next word
           printf("\n");
           continue;
       }
       //print chars
       printf("%c",str[i]);
   }

	return 0;
}

