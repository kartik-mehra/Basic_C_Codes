#include<stdio.h>
int fact(int a)
{ int r=1,b;
for(b=1;b<a+1;b++)
{
r=r*b;
}
return(r);
}
int main()
{
int a;
printf("enter the number to check the factorial");
scanf("%d",&a);
//fact(a);
printf("factorial is =%d",fact(a));
}
