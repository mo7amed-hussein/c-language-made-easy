/*
 Filename : 12 - advanced functions and pointers/01.c
Description : print char in reverse order  with recursion
*/
#include<stdio.h>

//declare printChar function
void printChar();

int main()
{

    puts("type any chars , press enter to finish ");
   printChar();

   return 0;
}

void printChar()
{
    char ch;
    //read char for stdin
    ch = getc(stdin);

    //check for \n char
    if(ch != '\n' )
    {
        printChar();
    }

    printf("%c",ch);
}
