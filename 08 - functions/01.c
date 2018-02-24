/*
 Filename : 08 - functions /01.c
Description : void function
*/
#include<stdio.h>

//function prototype
void sayHello();

int main()
{
    //call function
    sayHello();

	return 0;
}

void sayHello()
{
    printf("hello from function\n");
}
