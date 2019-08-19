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
        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        if(a[i]==a[j])
                        {
                                a[j]=0;
                        }
                }
        }
        printf("Array With Duplicates Removed- ");
        for(int i=0; i<n; i++)
        {
                if(a[i]!=0)
                {
                        printf("%d  ",a[i]);
                }
        }
        printf("\n");
}
