#include <stdio.h>
void main()
{
        int x;
        printf("Enter Number- ");
        scanf("%d",&x);
        if(x%7==0)
        {
                printf("Divisible by 7\n");
        }
        else
        {
                printf("Not Divisible by 7\n");
        }
}
