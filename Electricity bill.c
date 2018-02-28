#include <stdio.h>
#include <math.h>


int main()
{
  int unit;
  float amt,total,surcharge;
  printf("ENTER THE UNIT");
  scanf("%i",&unit);
  if(unit<=50)
    amt=unit*0.5;
  else if(unit<=150)
    amt=25+((unit-50)*0.75);
   else if(unit<=250)
   amt=100+((unit-150)*1.2);
   else
   amt=220+((unit-250)*1.5);
   surcharge=amt*0.20;
  total=amt+surcharge;
  printf("ELECTRICITY BILL IS:%f\n",total);
}
