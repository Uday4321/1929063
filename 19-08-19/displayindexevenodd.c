#include <stdio.h>
void main()
{
        int n;
        printf("Enter Size- ");
        scanf("%d",&n);
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Elements With Even Index- ");
        for(int i=0; i<n; i++)
        {
                if(i%2==0)
                {
                        printf("%d  ",a[i]);
                }
        }
        printf("\n");
        printf("Elements With Odd Index- ");
        for(int i=0; i<n; i++)
        {
                if(i%2!=0)
                {
                        printf("%d  ",a[i]);
                }
        }
        printf("\n");
}
