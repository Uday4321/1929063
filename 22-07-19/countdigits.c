#include <stdio.h>
void main()
{
        int x;
        printf("Enter Number- ");
        scanf("%d",&x);
        if(x>=100&&x<1000)
        {
                printf("3 Digits\n");
        }
        else if(x>=10&&x<100)
        {
                printf("2 Digits\n");
        }
        else if(x<10)
        {
                printf("1 Digit\n");
        }
        else
        {
                printf("More than 3 Digits\n");
        }
}
