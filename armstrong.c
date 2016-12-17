#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,r,s=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(x)
{
r=x%10;
x=x/10;
s+=r*r*r;
}
if(n==s)
{
printf("Armstrong Number");
}
else
{
printf("Not Armstrong Number");
}
getch();
}