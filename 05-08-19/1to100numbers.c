#include <stdio.h>
void main()
{
        int n=2;
        for(int i=0; i<100; i++)
        {
                for(int j=1; j<n; j++)
                {
                        printf("%d, ",j);
                }
                n++;
                printf("\n");
        }
}
