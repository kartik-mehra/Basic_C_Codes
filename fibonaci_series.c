#include<stdio.h>
main()
{
int a=0,b=1,d,nt;
printf("enter the number up to which");
scanf("%d",&d);
printf("%d %d",a,b);
while(b<d)
{
nt=a+b;
a=b;
b=nt;
if(b<=d){
printf(" %d ",nt);}

}

}
