#include<stdio.h>

int main()

{
int year;

printf("Enter year: \n");
scanf("%d",&year);

if (year%4 ==0)

           {
              if (year%100 ==0)
                 {
                   if(year%400 ==0)
                    printf("year is a leap year\n");
                    else
                    printf("year is not a leap year\n");
              }
              else
              printf("year is a leap year \n");
   }
else
printf("year is not a leap year\n");
}

/*
output:
Enter year:
2018
year is not a leap year
root@elab2-29:~/Desktop/chetan#


*/

