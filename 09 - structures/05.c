/*
 Filename : 09 - structures/01.c
Description : use of union
*/
#include<stdio.h>

//declare union form
union value
{
    int x;
    int y;
};

int main()
{
    union value v1;
    v1.x = 20 ;
    printf("value of x is %d \n", v1.x);
    printf("value of y is %d \n\n", v1.y);

    v1.y = 50;
    printf("value of x is %d \n", v1.x);
    printf("value of y is %d \n\n", v1.y);
	
	return 0;
}
