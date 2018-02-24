/*
 Filename : 13 - practical examples /palindrome.c
Description : check if string is palindrome
*/
#include<stdio.h>
#include<string.h>

int isPalindrome(char * str );

int main()
{
    char * str = "level";

   if( isPalindrome(str) == 1 )
   {
       puts("string is palindrome");
   }
   else
   {
       puts("string isn't palindrome");
   }
	return 0;
}

int isPalindrome(char * str )
{
    //loop counter
    int i ;
    //string length
    int len = strlen(str);
     for(i =0 ; i<len/2 ;i++)
     {
        if( *(str+i) != *(str+len-1-i) )
        {
            //string isn't palindrome
            return 0 ;
        }
     }
     //string is palindrome
     return 1;
}
