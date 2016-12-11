#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("Enter a num:\t");
scanf("%d",&i);
if(i>0)
printf("%d Is a Positive",i);
else if(i<0)
printf("%d Is a Negative",i);
getch();
}