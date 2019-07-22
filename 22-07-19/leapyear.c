#include <stdio.h>
void main()
{
        int x;
        printf("Enter Year- ");
        scanf("%d",&x);
        if(x%4==0)
        {
                printf("Leap Year\n");
        }
        else
        {
                printf("Not a Leap Year\n");
        }
}
