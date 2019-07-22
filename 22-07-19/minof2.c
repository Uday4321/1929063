#include <stdio.h>
void main()
{
        int a,b;
        printf("Enter First Number- ");
        scanf("%d",&a);
        printf("Enter Second Number- ");
        scanf("%d",&b);
        if(a<b)
        {
                printf("%d is smaller than %d\n",a,b);
        }
        else
        {
                printf("%d is smaller than %d\n",b,a);
        }
}
