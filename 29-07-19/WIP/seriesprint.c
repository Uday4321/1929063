#include <stdio.h>
void main()
{
int n;
printf("Enter Number- ");
scanf("%d",&n);
        for(int i=100;i>=0;)
        {
            printf("%d, ",i);
            i=i-2;
        }
}
