#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int year;
printf("Enter a year:\t");
scanf("%d",&year);
if(year%4==0)
{
printf("%d is a leap year",year);
}
else
{
printf("%d is not a leap year",year);
}
getch();
}