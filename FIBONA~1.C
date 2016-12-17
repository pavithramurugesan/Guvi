#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,t,a,b;
printf("Enter a Number :");
scanf("%d",&n);
a=0;
b=1;
printf("%d\t%d\t",a,b);
for(i=0;i<n;i++)
{
t=a+b;
a=b;
b=t;
printf("%d\t",t);
}
getch();
}