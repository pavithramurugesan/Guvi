#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i=0,n;
printf("Enter a number:");
scanf("%d",&n);
while(i<n)
{
sum+=i;
i++;
}
printf("Sum of %d is %d",n,sum);
getch();
}