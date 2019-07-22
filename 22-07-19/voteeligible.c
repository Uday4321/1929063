#include <stdio.h>
void main()
{
        int x;
        printf("Enter Age- ");
        scanf("%d",&x);
        if(x>=18)
        {
                printf("Eligible to Vote\n");
        }
        else
        {
                printf("Not Eligible to Vote\n");
        }
}
