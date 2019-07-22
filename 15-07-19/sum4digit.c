#include <stdio.h>
void main()
{
        int x;
        printf("Enter Number- ");
        scanf("%d",&x);
        int r=x%10;
        x=x/10;
        r=r+(x%10);
        x=x/10;
        r=r+(x%10);
        x=x/10;
        r=r+(x%10);
        printf("Reversed Number- %d\n",r);
}
