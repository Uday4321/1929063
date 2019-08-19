# include <stdio.h>
void main()
{
        int x,n;
        printf("Whose Multiplication Table Do Yu Want ?\n");
        scanf("%d",&x);
        printf("Till How Much Do Yu Want ?\n");
        scanf("%d",&n);
        n=getNum();
        for(int i=1; i<=n; i++)
        {
                printf("%d x %d = %d\n",x,i,x*i);
        }
}
