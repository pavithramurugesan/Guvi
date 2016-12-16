#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("Enter a Number:\t");
scanf("%d",&i);
if(i%2==0)
{
printf("%d is an Even number",i);
}
else
{
printf("%d is an odd number",i);
}
getch();
}