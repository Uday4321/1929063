#include <stdio.h>
void main()
{
        float a,b;
        printf("Enter First Number- ");
        scanf("%f",&a);
        printf("Enter Second Number- ");
        scanf("%f",&b);
        int c=a;
        int d=b;
        int x=c%d;
        printf("a+b- %f\n",a+b);
        printf("a-b- %f\n",a-b);
        printf("a*b- %f\n",a*b);
        printf("a/b- %f\n",a/b);
        printf("a%cb- %d\n",'%',x);
        printf("a<b- %d\n",a<b);
        printf("a>b- %d\n",a>b);
        printf("a==b- %d\n",a==b);
        printf("a=!b- %f\n",a=!b);
        printf("a>=b- %d\n",a>=b);
        printf("a<=b- %d\n",a<=b);
        printf("a&&b- %d\n",a&&b);
        printf("a||b- %d\n",a||b);
}
