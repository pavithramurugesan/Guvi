#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter Q to exit:");
scanf("%c",&c);
if(c=='Q')
{
exit();
}
else
{
main();
}
getch();
}