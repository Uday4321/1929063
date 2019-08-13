#include <stdio.h>
void main()
{
        int n=1,c=0,s=0;
        while(n<100)
        {
                if(n%6==0&&n%4!=0)
                {
                        s=s+n;
                        c++;
                }
                n++;
        }
        printf("Count Of Numbers Divisible by 6 And Not 4- %d\n",c);
        printf("Sum Of Numbers Divisible by 6 And Not 4- %d\n",s);
}
