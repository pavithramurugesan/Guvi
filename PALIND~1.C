#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,r,q;
int x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(x)
{
r=x %10;
x=x/10;
s=(s+r)*10;
}
q=s/10;
if(n==q)
{
printf("%d is a palindrome",n);
}
else
{
printf("%d is not a palindrome",n);
}
getch();
}