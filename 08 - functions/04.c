/*
 Filename : 08 - functions /02.c
Description : global
*/
#include<stdio.h>

//function prototype
void printGlobal();

//global variable
int number =150;

int main()
{
    printf("value of global variable is %d , from main \n", number );
    //call printGlobal function
    printGlobal();

	return 0;
}

void printGlobal()
{
    printf("value of global variable is %d , from printGlobal  \n", number );
}

