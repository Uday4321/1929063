#include <stdio.h>
void main()
{
        int a,b;
        printf("Enter First Number- ");
        scanf("%d",&a);
        printf("Enter Second Number- ");
        scanf("%d",&b);
        int x=(a>b ? a : b);
        printf("Maximum- %d\n",x);
}
