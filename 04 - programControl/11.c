/*
 Filename : 04 - programControl /11.c
Description : while loop
*/
#include<stdio.h>

int main()
{
    // loop counter ,with initialized value of 1
    int counter =1;

    //print counter value before loop
    printf("counter before loop is %d\n",counter);

    //loop if counter <= 10
    while(counter <= 10 )
    {
        printf("%d ",counter);

        //increment counter
        counter++;
    }

    //print counter value after loop
    printf("\ncounter after loop is %d\n",counter);

	return 0;
}

