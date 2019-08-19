#include <stdio.h>
void main()
{
        int n=10,s=0;
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
                s=s+a[i];
        }
        printf("Sum Of Elements- %d\n",s);
}
