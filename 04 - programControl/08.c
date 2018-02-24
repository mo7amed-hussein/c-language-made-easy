/*
 Filename : 04 - programControl /07.c
Description : scanf with two inputs char and int
*/
#include<stdio.h>

int main()
{
    //to save user inputs
    int number ;
    char ch ;

    //ask user to type value
    printf("please insert number and character separated by space  : ");
    //get user value
    scanf("%d %c",&number,&ch);
    //print user value
    printf("number is %d\n",number);
    printf("character is %c\n",ch);

	return 0;
}

