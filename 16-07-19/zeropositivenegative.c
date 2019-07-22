#include <stdio.h>
void main()
{
        int x;
        printf("Enter Number- ");
        scanf("%d",&x);
        x==0 ? printf("Zero\n") : (x>0 ? printf("Positive\n") : printf("Negative\n"));
}
