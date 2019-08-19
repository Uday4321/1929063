#include <stdio.h>
void main()
{
        int n,se=0,so=0;
        printf("Enter Size- ");
        scanf("%d",&n);
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
                if(a[i]%2==0)
                {
                        se+=a[i];
                }
                else
                {
                        so+=a[i];
                }
        }
        printf("Sum Of Even Elements- %d\n",se);
        printf("Sum Of Odd Elements- %d\n",so);
}
