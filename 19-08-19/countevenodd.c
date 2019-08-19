#include <stdio.h>
void main()
{
        int n,e=0,o=0;
        printf("Enter Size- ");
        scanf("%d",&n);
        int a[n];
        printf("Enter %d Elements- \n",n);
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
                if(a[i]%2==0)
                {
                        e++;
                }
                else
                {
                        o++;
                }
        }
        printf("No. Of Even Elements- %d\n",e);
        printf("No. Of Odd Elements- %d\n",o);
}
