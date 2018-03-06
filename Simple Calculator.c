#include<stdio.h>
#include<math.h>

int main()
{

float a;
float b;
char operator;

printf("Enter symbol (*,/,+,-):");
scanf("%c",&operator);

printf("enter two values:");
scanf("%f %f",&a,&b);

switch (operator)
{

case'*':
       printf("result is: %f*%f=%f",a ,b,a*b);
       break;
case'/':
       printf("result is: %f/%f=%f",a ,b,a/b);
       break;
case'+':
       printf("result is: %f+%f=%f",a ,b,a+b);
       break;
case'-':
       printf("result is: %f-%f=%f",a ,b,a-b);
       break;

default:
    printf("ERROR!");

}



/*

Enter symbol (*,/,+,-):/
enter two values:8
2
result is: 8.000000/2.000000=4.000000root@elab2-29:~/Desktop/chetan#

*/

}
