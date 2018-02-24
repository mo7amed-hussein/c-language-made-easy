/*
 Filename : 13 - practical examples /extract_numbers.c
Description : extract numbers from string
*/
#include<stdio.h>
#include<string.h>

void extractNum(char * str);

int main()
{
    char *str = "hjy6w3b90c1";
    extractNum(str);
	return 0;
}

void extractNum(char * str)
{
     //loop counter
    int i ;
    //string length
    int len = strlen(str);
     for(i =0 ; i<len ;i++)
     {
        if( *(str+i) >= 48 && *(str+i) <= 57)
        {
            //number
                printf("%c",*(str+i) );
        }
     }
}
