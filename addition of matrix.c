#include<stdio.h>
int main()
{
int a,b[100][100],c,d[100][100],k[100][100];
int i,j;
printf("enter the size of array\n");
scanf("%d %d",&a,&c);
for(i=0;i<a;i++)
{
for(j=0;j<c;j++){
scanf("%d",&b[i][j]);
}
}
//printf("enter the size of second array\n");
//scanf("%d",&c);
printf("enter the value of second ");
for(i=0;i<a;i++)
{
for(j=0;j<c;j++){
scanf("%d",&d[i][j]);
}

}
for(i=0;i<a;i++)
{
for(j=0;j<c;j++)
{
k[i][j]=b[i][j]+d[i][j];
}
}
for(i=0;i<a;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",k[i][j]);
}
printf("\n");
}
}
