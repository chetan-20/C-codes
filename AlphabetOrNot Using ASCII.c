#include<stdio.h>
int main()
{ char  ch;
printf("Enter variable:");
scanf("%c",&ch);
if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
{ printf("Entered character is an alphabet");
}
else
{ printf("Entered character is not alphabet");
}
}


/*
output:
Enter variable:a
Entered character is an alphabetdbit@elab2-16:~/Desktop/chetan$

*/
