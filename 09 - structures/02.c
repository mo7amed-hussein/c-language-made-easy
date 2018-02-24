/*
 Filename : 09 - structures/01.c
Description : nested structure
*/
#include<stdio.h>

//describe point structure
struct point
{
    int x;
    int y;
};
//describe rectangle points structure
struct rect
{
    //left lower point
    struct point p1;
    //right upper point
    struct point p2;
};

int main()
{
    struct rect r ;

    //left lower point ( 1 , 1 )
    r.p1.x = 1;
    r.p1.y = 1;
    //right upper point ( 3 , 4 )
    r.p2.x = 4 ;
    r.p2.y = 3 ;
    //width =  x upper right - x lower left
    int width = r.p2.x - r.p1.x ;
    //height = y right upper - y lower left
    int height = r.p2.y - r.p1.y;

    printf("rectangle area is %d \n", width * height );

	return 0;
}
