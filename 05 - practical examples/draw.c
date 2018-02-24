/*
 Filename : 05 - practical examples /draw.c
Description : draw shape
*/
#include<stdio.h>

int main()
{
    //shape width
    int width ;
    //loop variable
    int i ,j;

    //ask user to type width
    printf("please type shape width : \t");
    //get shape width
    scanf("%d",&width);

    //draw first part
    for(i = 1 ;i<=width ; i++)
    {
        j=i;//number of stars in each line
        while(j--)
        {
            printf("*");//draw stars
        }
        printf("\n");//add newline
    }
    //draw second part
     for(i = width-1 ; i>0 ; i--)
    {
        j=i;
        while(j--)
        {
            printf("*");
        }
        printf("\n");
    }

	return 0;
}

