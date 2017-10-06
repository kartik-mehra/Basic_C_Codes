#include<stdio.h>
main()
{
int a,b,i,d=0;
printf("enter the row");
scanf("%d",&a);
for(i=0;i<=a;i++)
{

for(b=1;b<=i;b++)
{
printf("%d\t",d);
d++;
}
printf("\n");
}
}
