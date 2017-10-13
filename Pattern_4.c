#include<stdio.h>
main()
{
int a,b,c,i;
printf("enter the  row");
scanf("%d",&a);
for(i=1;i<=a;i++)
{

for(b=a;b>i;b--)
{

    printf(" ");
}
for(c=1;c<i+1;c++)
{

    printf("%d",c);
}
printf("\n");
}
}
