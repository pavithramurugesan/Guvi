#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
printf("Enter a table upto you want :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=10;j++)
{
k=i*j;
printf("%d * %d = %d",i,j,k);
}
}
getch();
}