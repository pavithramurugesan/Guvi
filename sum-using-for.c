#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i,n;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("Sum of %d is %d",n,sum);
getch();
}