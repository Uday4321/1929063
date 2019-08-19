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
        int t=a[0];
        a[0]=a[n-1];
        a[n-1]=t;
        printf("First And Last Element Swapped- ");
        for(int i=0; i<n; i++)
        {
                printf("%d  ",a[i]);
        }
        printf("\n");
}
