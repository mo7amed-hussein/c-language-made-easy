/*
 Filename : 04 - programControl /10.c
Description : game main menu using switch
*/
#include<stdio.h>

int main()
{
    // user choice
    int choice;

    //show menu
    printf(":... Main Menu ...:\n");
    printf("1 : Start Game \n");
    printf("2 : Game Options \n");
    printf("3 : High scores \n");
    printf("4 : Exit Game \n");

    //ask user to select from menu
    printf("Your choice :   ");
    //get user choice
    scanf("%d" ,&choice);

   switch (choice)
   {
   case 1 :
       printf("loading game scene ... \n");
       break;
   case 2:
       printf("loading game options ... \n");
       break;
   case 3:
       printf("loading high scores ... \n");
       break;
   case 4:
       printf("game termination");
       break;
   default:
       printf("unknown choice !!!\n");

   }
	return 0;
}

