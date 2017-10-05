#include<stdio.h>
 void main()
{
 int a,b;
 printf("enter the words");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("first word is%d\n",a);
 printf("second word is%d",b);
}
