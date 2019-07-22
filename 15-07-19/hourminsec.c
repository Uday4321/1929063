#include <stdio.h>
void main()
{
        int s;
        printf("Enter Seconds- ");
        scanf("%d",&s);
        int h=s/3600;
        s=s%3600;
        printf("%d Hours, %d Minutes, %d Seconds\n",h,s/60,s%60);
}
