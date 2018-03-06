#include <stdio.h>
#include <math.h>

int main()
{

int a;
int HRA;
int DA;
int b;

printf("Enter Value Of Basic Salary: \n");
scanf("%i", &a);

     if (a<= 10000)
{	HRA = (20*a)/100;
	DA = (80*a)/100;
	b = HRA+DA+a;
	printf("Gross Salary is:%i \n", b);
}
else if (a>=10001 && a<=20000)
{	HRA = (25*a)/100;
	DA = (90*a)/100;
	b = HRA+DA+a;
	printf("Gross Salary is:%i \n", b);
}
else
{	HRA = (30*a)/100;
	DA = (95*a)/100;
	b = HRA+DA+a;
	printf("Gross Salary is:%i \n", b);

}
}

/*
OUTPUT:

Enter Value Of Basic Salary:
9000
Gross Salary is:18000

*/
