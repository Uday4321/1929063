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
        printf("Square Of Elements- ");
        for(int i=0; i<n; i++)
        {
                printf("%d  ",a[i]*a[i]);
        }
        printf("\n");
}
