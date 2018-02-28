#include <stdio.h>
#include <math.h>


int main()
{
  int n,count=0;
  printf("Enter the number:\n");
  scanf("%d",&n);
  while(n!=0)
  { n=n/10;
     count++;

  }
  printf("Number of digits=%d",count);
}
