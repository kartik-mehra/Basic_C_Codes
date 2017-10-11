#include<stdio.h>
 int main()
{int n,i=0;
printf("enter the value");
scanf("%d",&n);

while(!(n&1))
{

i++;
n=n>>1;

}
printf("%d",i);

}
