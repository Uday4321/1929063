#include <stdio.h>
void main()
{
        int n;
        printf("1.Odd from 1 to 99\n2.Even from 100 to 0\n3.Print Range\nChoose Option- \n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
        {
                printf("Odd from 1 to 99- ");
                for(int i=1; i<100;)
                {
                        printf("%d, ",i);
                        i=i+2;
                }
                printf("\n");
                break;
        }
        case 2:
        {
                printf("Even from 100 to 0- ");
                for(int i=100; i>=0;)
                {
                        printf("%d, ",i);
                        i=i-2;
                }
                printf("\n");
                break;
        }
        case 3:
        {
                int m,n;
                printf("Enter Lower Limit- ");
                scanf("%d",&m);
                printf("Enter Upper Limit- ");
                scanf("%d",&n);
                printf("Range Print- ");
                for(int i=m; i<=n; i++)
                {
                        printf("%d, ",i);
                }
                printf("\n");
                break;
        }
        default:
        {
                printf("Invalid Input\n");
        }
        }
}
