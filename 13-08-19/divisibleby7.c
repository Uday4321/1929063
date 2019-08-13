#include <stdio.h>
void main()
{
        int n=101,c=0,s=0;
        while(n<200)
        {
                if(n%7==0)
                {
                        s=s+n;
                        c++;
                }
                n++;
        }
        printf("Count Of Numbers Divisible by 7- %d\n",c);
        printf("Sum Of Numbers Divisible by 7- %d\n",s);
}
