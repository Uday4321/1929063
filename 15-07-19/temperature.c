#include <stdio.h>
void main()
{
        int c;
        printf("Enter Temperature in Celsius- ");
        scanf("%d",&c);
        double f=((9*c)/5)+32;
        printf("Temperature in Fahrenheit- %f\n",f);
}
