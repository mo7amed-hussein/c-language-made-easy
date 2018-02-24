/*
 Filename : 09 - structures/01.c
Description : struct function type
*/
#include<stdio.h>

//describe point structure
struct point
{
    int x;
    int y;
} pt ;

//declare getPoint function
struct point getPoint(int x ,int y);

int main()
{
    struct point pt ;
    //call getPoint and assign returned value to pt
    pt = getPoint(12 , 44);
    printf("points are %d ,%d \n", pt.x , pt.y );
	return 0;
}

struct point getPoint(int x ,int y)
{
    //create temporarily variable
    struct point temp ;
    temp.x = x;
    temp.y = y;
    return temp ;
};
