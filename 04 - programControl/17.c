/*
 Filename : 04 - programControl /17.c
Description : even number print
*/
#include<stdio.h>

int main()
{
    //loop counter
    int counter;
    //loop from 1 to 10 with step =1
    for(counter =1 ;counter <= 10 ; counter++)
    {
        //if number is odd don't print it
        if(counter % 2 != 0)
        {
            //go to loop start and skip the rest
            continue;
        }
    //print number
        printf("%d ",counter);
    }


	return 0;
}

