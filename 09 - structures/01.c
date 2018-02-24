/*
 Filename : 09 - structures/01.c
Description : simple use of structure
*/
#include<stdio.h>

//declare structure form
struct emp
{
    char name[100] ;
    float salary ;
} ;

int main()
{
    //declare variable of type emp
    struct emp emp1;
    //get employee info from user
    printf("type employee name : ");
    gets(emp1.name);
    printf("type employee salary : ");
    scanf("%f",&emp1.salary);

    //print employee info
    printf("employee name is %s , his salary is %.2f \n", emp1.name , emp1.salary );

	return 0;
}
