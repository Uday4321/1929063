#include <stdio.h>
void main()
{
        int a,b,c;
        printf("Enter Sides Of Triangle- \n");
        scanf("%d%d%d",&a,&b,&c);
        a=a*a, b=b*b, c=c*c;
        if(a+b==c||b+c==a||c+a==b)
        {
                printf("Right Angled Triangle\n");
        }
        else
        {
                printf("Not Right Angled Triangle\n");
        }
}
