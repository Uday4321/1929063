#include <stdio.h>
void main()
{
        int a,b,c;
        printf("Enter First Number- ");
        scanf("%d",&a);
        printf("Enter Second Number- ");
        scanf("%d",&b);
        printf("Enter Third Number- ");
        scanf("%d",&c);
        int x=(a>b ? a : b);
        int y=(x>c ? x : c);
        printf("Maximum- %d\n",y);
}
