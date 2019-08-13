#include <stdio.h>
void main()
{
        int n;
        printf("Enter Factorial Of A Number- ");
        scanf("%d",&n);
        int i=1,c=0;
        while(n!=0)
        {
                if(n%i==0)
                {
                        n=n/i;
                        i++;
                        c++;
                }
                else
                {
                        break;
                }
        }
        printf("The Number Is- %d\n",c);
}
