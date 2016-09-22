#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nenetr the number to be checked:");
scanf("%d",&a);
if(a>0)
 printf("the number %d is positive",a);
else if(a<0)
  printf("\nthe number %d is negative",a);
else
  printf("the number is zero");
getch();
