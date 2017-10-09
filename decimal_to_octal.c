#include<stdio.h>
#include<math.h>
main()
   {
    int r,d,o=0,i=0;

    printf("enter the decimal digit to change into octal");
    scanf("%d",&d);
    while(d != 0)
      {
        r=d%8;
        o+=r*pow(10,i);
        d=d/8;
        i++;
      }
    printf("octal number is=%d",o);
   }

