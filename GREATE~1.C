#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 3 Numbers:\t");
scanf("%d\t%d\t%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%d is greater",a);
}
else if((b>c)&&(b>a))
{
printf("%d is a greater",b);
}
else
{
printf("%d is a greater",c);
}
getch();
}