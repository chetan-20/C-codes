#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{ printf("greater number is %d",a);
}
else if((b>c)&&(b>a))
{ printf("greater number is %d",b);
}
else if((c>b)&&(c>a))
{ printf("greater number is %d",c);
}
else
{ printf("all three are equal");
}



/*
outputt:
Enter three numbers10
12
14
greater number is 14dbit@elab2-16:~/Desktop/chetan$

*/
