#include<stdio.h>
#include<math.h>
int main()
{
int n;
float m,a,i;
printf("enter a no.");
scanf("%d",&n);
m=sqrt(n);

for(i=1.0;i<=m;i++)
{

if(i==1||i==2||i==3||i==5||i==7)
{

a=n/i;
printf("\n%.2f",a);
printf("\n%d",i);
}
}
if(a==0.0)
{
    printf("\nnot prime");
}
else
{
    printf("\nprime");

}

}
