
#include<stdio.h>
#include<conio.h>
int main()
{
int fact,i,n;
printf("Enter a number:");
scanf("%d",&n);
if(n<=0)
{
return 1;
}
else
{
fact=1;
i=1;
while(i<=n)
{
fact=fact*i;
i++;
}
printf("%d",fact);
}
getch();
//return 0;
}
