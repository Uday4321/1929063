#include <stdio.h>
void main()
{
        float a,b;
        printf("Enter First Number- ");
        scanf("%f",&a);
        printf("Enter Second Number- ");
        scanf("%f",&b);
        int c=a,d=b,x=c%d;
        printf("a+b- %f\n",a+b);
        printf("a-b- %f\n",a-b);
        printf("a*b- %f\n",a*b);
        printf("a/b- %f\n",a/b);
        printf("a%b- %d\n",x);
        printf("a<b- %d\n",a<b);
        printf("a>b- %d\n",a>b);
        printf("a==b- %d\n",a==b);
        printf("a!=b- %f\n",a!=b);
        printf("a>=b- %d\n",a>=b);
        printf("a<=b- %d\n",a<=b);
        printf("a&&b- %d\n",a&&b);
        printf("a||b- %d\n",a||b);
}
