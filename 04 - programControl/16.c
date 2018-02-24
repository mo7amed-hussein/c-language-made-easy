/*
 Filename : 04 - programControl /13.c
Description : guess number
*/
#include<stdio.h>

int main()
{
    //selected number
    int number = 6;
    //user guess
    int guess;
    //trials counter
    int trials;

    //loop for 4 times
    for(trials = 1 ; trials <=4 ; trials ++)
    {
        //ask user to guess number
        printf("guess number between 1 ,10 : ");
        //get user guess
        scanf("%d",&guess);

        //check if guess is right
        if(guess == number)
        {
            //exit loop if guess is right
            break;
        }
        //inform user that guess was wrong
        printf("wrong guess,try again \n");
    }

    //check if user guess number correctly or not
    if(guess == number)
    {
        printf("\nExcellent\n");
    }
    else
    {
        printf("\nnumber is %d\n",number);
    }
	return 0;
}

