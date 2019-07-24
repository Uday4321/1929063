#include<stdio.h>
void main()
{
printf("Enter Character- ");
char c=getchar();
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("Vowel\n");
break;
default:
printf("Consonant\n");
}
}
