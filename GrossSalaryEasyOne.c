#include<stdio.h>
#include<math.h>
int main()
{
int basic;
float DA,HRA,TA,GS;

printf("enter the basic:");
scanf("%d",&basic);

DA=0.4*basic;
HRA=0.2*basic;
TA=0.12*basic;
GS=basic+DA+HRA+TA;

printf("the gross salary is:%.2f\n",GS);

}

/* Output
dbit@elab2-31:~$ cd /home/dbit/Desktop/sawan
dbit@elab2-31:~/Desktop/sawan$ gcc program8.c -o program8out -lm
dbit@elab2-31:~/Desktop/sawan$ ./program8out
enter the basic:10000
the gross salary is:17200.00
dbit@elab2-31:~/Desktop/sawan$
*/
