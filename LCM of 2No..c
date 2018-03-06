#include <stdio.h>
int main()
{
int i,c,a,b,LCM;
printf("Enter two Numbers");
scanf("%d%d",&a,&b);
c=a*b;
for(i=2;i<=c;i++)
{
if(i%a==0 && i%b==0)
{
LCM=i;
break;
}
}
printf("LCM is:%d\n",LCM);
}
/*
Enter two Numbers20
20
LCM is:20
root@elab2-5:~/Desktop/Chetan-IT#
*/

