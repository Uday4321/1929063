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
        printf("Reverse Order- ");
        for(int i=n-1; i>=0; i--)
        {
                printf("%d  ",a[i]);
        }
        printf("\n");
}
