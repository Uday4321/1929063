#include <stdio.h>
void main()
{
        int a,b;
        printf("Enter First Number- ");
        scanf("%d",&a);
        
        scanf("%d",&b);
        int x=(a>b ? a : b);
        printf("Maximum- %d\n",x);
}
