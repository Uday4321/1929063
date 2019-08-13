#include <stdio.h>
#include <math.h>
void main()
{
        printf("Enter Choice of sin, cos or tan- ");
        char T=getchar();
        double x, pi=3.1416;
        printf("Enter Angle- ");
        scanf("%lf",&x);
        double y=(pi/180)*x;
        if(T=='S'||T=='s')
        {
                printf("sin(%f)=%f\n",x,sin(y));
        }
        else if(T=='C'||T=='c')
        {
                printf("cos(%f)=%f\n",x,cos(y));
        }
        else if(T=='T'||T=='t')
        {
                printf("tan(%f)=%f\n",x,tan(y));
        }
}
