#include <stdio.h>
void main()
{
        int n,m=0;
        printf("Enter Size- ");
        scanf("%d",&n);
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
                if(a[i]>m)
                {
                        m=a[i];
                }
        }
        printf("Max- %d\n",m);
}
