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


