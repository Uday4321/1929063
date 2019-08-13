#include <stdio.h>
void main()
{
        int a,b;
        printf("Enter Numbers- \n");
        scanf("%d%d",&a,&b);
        if(a>b)
        {
                printf("a(%d) is greater than b(%d)\n",a,b);
        }
        else if(a<b)
        {
                printf("b(%d) is greater than a(%d)\n",b,a);
        }
        else if(a==b)
        {
                printf("a(%d) and b(%d) are equal\n",a,b);
        }
}
