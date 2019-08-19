#include <stdio.h>
void main()
{
        int n,s=0;
        printf("Enter Size- ");
        scanf("%d",&n);
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
                s=s+a[i];
        }
        int ma=a[0],mi=a[0];
        for(int i=0; i<n; i++)
        {
                if(a[i]>ma)
                {
                        ma=a[i];
                }
                if(a[i]<mi)
                {
                        mi=a[i];
                }
        }
        printf("Max- %d\n",ma);
        printf("Min- %d\n",mi);
        printf("Average Of All Elements- %d\n",s/n);
}
