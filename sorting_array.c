#include<stdio.h>
main()
{
int o,a,i,temp=0;
int k[1000];
printf("enter the size of array");
scanf("%d",&a);
for(i=0;i<a;i++)
{
printf("enter the elements of an array");
scanf("%d",&k[i]);
}
for(o=0;o<a;o++)
{

for(i=0;i<a;i++)
{
    if(k[i]>k[i+1])
    {
        temp=k[i];
        k[i]=k[i+1];
        k[i+1]=temp;

    }

}
}


for(i=0;i<a;i++)
{
printf("elements of an array is=%d",a[i]);

}

}
