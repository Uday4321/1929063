#include <stdio.h>
void main()
{
int n,S=0;
printf("1.Sum Of 1 to 5\n2.Sum of 1 to n\n3.Sum Of Squares Of Even Numbers Till n\nChoose Option- \n");
scanf("%d",&n);
switch(n)
{
    case 1:
    {
        printf("Sum Of 1 to 5- ");
        for(int i=1;i<=5;i++)
        {
            S=S+i;
        }
        printf("%d\n",S);
        break;
    }
    case 2:
    {
        int n;
        printf("Enter Number- ");
        scanf("%d",&n);
        printf("Sum of 1 to n- ");
        for(int i=1;i<=n;i++)
        {
            S=S+i;
        }
        printf("%d\n",S);
        break;
    }
    case 3:
    {
        int n;
        printf("Enter Number- ");
        scanf("%d",&n);
        printf("Sum Of Squares Of Even Numbers Till n- ");
        for(int i=1;i<=n;i++)
        {
            int j=i*i;
            S=S+j;
        }
        printf("%d\n",S);
        break;
    }
    default:
    {
        printf("Invalid Input\n");
    }
}
}
