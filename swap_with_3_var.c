#include<stdio.h>
main()
{
int a,b,c;
printf("enterthe two words");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("now words are%d\n%d",a,b);
}
