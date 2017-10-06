#include<stdio.h>
main()
{
int a;
int large=0;
int i;
printf("enter the number of n");
scanf("%d",&a);
int b[a];
for(i=0;i<a;i++)
{
printf("enter the number");
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
if(large<b[i])
large=b[i];
}
printf("largest number is%d",large);
}
