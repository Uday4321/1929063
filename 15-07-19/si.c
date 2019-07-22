#include <stdio.h>
void main()
{
        int P,R,T;
        printf("Enter Principal Amount- ");
        scanf("%d",&P);
        printf("Enter Rate Of Interest- ");
        scanf("%d",&R);
        printf("Enter No. Of Years- ");
        scanf("%d",&T);
        double SI=(P*R*T)/100;
        printf("Simple Interest= %f\n",SI);
}
