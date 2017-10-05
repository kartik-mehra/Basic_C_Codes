#include<stdio.h>
 main()
{int n,i,k;
printf("enter the value");
scanf("%d",&i);
scanf("%d",&n);

k=i^n;
n=k^n;
i=k^i;
printf(" after swaping %d\n",i);
printf(" after swaping %d\n",n);
}
