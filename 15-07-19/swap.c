#include <stdio.h>
void main()
{
        int int1,int2,temp;
        printf("Enter First Number- ");
        scanf("%d",&int1);
        printf("Enter Second Number- ");
        scanf("%d",&int2);
        temp=int1;
        int1=int2;
        int2=temp;
        printf("First Number- %d\n",int1);
        printf("Second Number- %d\n",int2);
}
