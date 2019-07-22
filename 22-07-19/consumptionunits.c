#include <stdio.h>
void main()
{
        int c;
        float s;
        printf("Enter Consumption Units- ");
        scanf("%d",&c);
        if(c<=200)
        {
                s=0.5*c;
        }
        else if(c>200&&c<=400)
        {
                s=100+(0.65*(c>200 ? c-200 : 0));
        }
        else if(c>400&&c<=600)
        {
                s=230+(0.8*(c>400 ? c-400 : 0));
        }
        else if(c>=600)
        {
                s=390+(1*(c>600 ? c-600 : 0));
        }
        printf("Total Charge- %f\n",s);
}
