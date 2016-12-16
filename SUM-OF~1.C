#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,r,q;
printf("Enter a number:");
scanf("%d",&n);
while(n)
{
r=n%10;
n=n/10;
s+=r;
}
printf("Sum of digits is %d",s);
getch();
}