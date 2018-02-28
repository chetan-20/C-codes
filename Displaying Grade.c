#include <stdio.h>
#include <math.h>


int main()
{
  float avg;
  printf("Enter the average marks:\n");
  scanf("%f",&avg);
  if(avg>=75)
    printf("Voila A Grade\n");
  else if((avg>=50)&&(avg<75))
    printf("B Grade");
  else if((avg>=25)&&(avg<50))
    printf("C grade");
  else
    printf("Grade F");
  return 0;
}
