/*
 Filename : 05 - practical examples /triangle.c
Description : triangle type
*/
#include<stdio.h>
#include<math.h>

int main()
{
    //triangle dimensions
    int a , b ,h ;
    //calculated hypotenuse
    int hCalc;
    //ask user to type triangle dimensions
    printf("please type triangle dimensions as a b h:  ");
    scanf("%d %d %d",&a,&b,&h);

    //calculate h
    hCalc= sqrt(a*a + b*b );

    if( h == hCalc )
    {
        printf("triangle is right\n");
    }
    else if (h > hCalc)
    {
        printf("triangle is obtuse\n");
    }
    else
    {
        printf("triangle is acute\n");
    }
	return 0;
}

