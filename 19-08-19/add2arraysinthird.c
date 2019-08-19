#include <stdio.h>
void main()
{
        int n=10;
        int a[n],b[n],c[n];
        printf("Enter %d Elements in Array A- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter %d Elements in Array B- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&b[i]);
                c[i]=a[i]+b[i];
        }
        printf("Array C- ");
        for(int i=0; i<n; i++)
        {
                printf("%d  ",c[i]);
        }
        printf("\n");
}
