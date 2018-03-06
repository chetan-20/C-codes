#include <stdio.h>
int main()
{
int a,b,c,i;
a=0;
b=1;
printf("%d%d",a,b);
for(i=1;i<=10;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
/*
output is
01123581321345589 root@elab2-5:~/Desktop/Chetan-IT# */

