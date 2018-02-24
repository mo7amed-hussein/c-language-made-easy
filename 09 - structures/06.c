/*
 Filename : 09 - structures/01.c
Description : use of union 2
*/
#include<stdio.h>

//declare union form
union value
{
    int x;
    char ch;
};

int main()
{
    union value v1;
    v1.x = 20 ;
    printf("value of x is %d \n", v1.x);
    printf("value of ch is %c \n\n", v1.ch);

    v1.ch = 'A' ;
    printf("value of x is %d \n", v1.x);
    printf("value of ch is %c \n\n", v1.ch);

	return 0;
}
