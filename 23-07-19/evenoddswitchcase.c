#include<stdio.h>
void main()
{
int x;
printf("Enter Number- ");
scanf("%d",&x);
switch(x%2)
{
case 0:
printf("Even\n");
break;
default:
printf("Odd\n");
}
}
