#include<stdio.h>

main()
{
    int r,d,o=0,i=1;

printf("enter the decimal digit to change into binary");
scanf("%d",&d);
while(d != 0)
{
r=d%8;
o+=r*i;
d=d/8;
i=i*10;
}
printf("binary number is=%d",o);
}

