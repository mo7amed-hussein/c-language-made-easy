/*
 Filename : 08 - functions /02.c
Description : static inside function
*/
#include<stdio.h>

void printValue();
int main()
{
    printValue();
    printValue();
    printValue();

	return 0;
}

void printValue()
{
    static int num =20;
    num++;
    printf("value is %d \n",num);
}
