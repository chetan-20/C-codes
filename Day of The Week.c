#include<stdio.h>

int main()

{

int daynumber;

printf("Enter day number:\n");
scanf("%d",&daynumber);

switch(daynumber)
{
 case 1:
        printf("the day is sunday");
        break;
case 2:
        printf("the day is monday");
        break;
case 3:
        printf("the day is tuesday");
        break;
case 4:
        printf("the day is wednesday");
        break;
case 5:
        printf("the day is thursday");
        break;
case 6:
        printf("the day is friday");
        break;
case 7:
        printf("the day is saturday");
        break;
default:
        printf("ERROR!");

}
}

/*
output:
Enter daynumber:
7
the day is saturdayroot@elab2-29:~/Desktop/chetan#

*/
