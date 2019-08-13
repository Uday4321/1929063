#include <stdio.h>
void main()
{
        char c='A';
        int n;
        printf("Enter Odd Number- ");
        scanf("%d",&n);
        int x=n/2,y=1;
        for(int i=0; i<(n+1)/2; i++)
        {
                for(int j=0; j<x; j++)
                {
                        if(c>'Z')
                        {
                                c='A';
                        }
                        printf("%c  ",c);
                        c++;
                }
                for(int j=0; j<y; j++)
                {
                        printf("*  ");
                }
                for(int j=0; j<x; j++)
                {
                        if(c>'Z')
                        {
                                c='A';
                        }
                        printf("%c  ",c);
                        c++;
                }
                y+=2;
                x--;
                printf("\n");
        }
        x=1;
        y=n-2;
        for(int i=0; i<(n-1)/2; i++)
        {
                for(int j=0; j<x; j++)
                {
                        if(c>'Z')
                        {
                                c='A';
                        }
                        printf("%c  ",c);
                        c++;
                }
                for(int j=0; j<y; j++)
                {
                        printf("*  ");
                }
                for(int j=0; j<x; j++)
                {
                        if(c>'Z')
                        {
                                c='A';
                        }
                        printf("%c  ",c);
                        c++;
                }
                y-=2;
                x++;
                printf("\n");
        }
}
