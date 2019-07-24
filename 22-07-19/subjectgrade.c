#include <stdio.h>
void main()
{
        int p,c,m;
        printf("Enter Physics Marks- ");
        scanf("%d",&p);
        printf("Enter Chemistry Marks- ");
        scanf("%d",&c);
        printf("Enter Mathematics Marks- ");
        scanf("%d",&m);
        int t=p+c+m;
        printf("Total Marks- %d\n",t);
        if(t<=50)
        {
                printf("Grade- F\n");
        }
        else if(t>50&&t<=100)
        {
                printf("Grade- D\n");
        }
        else if(t>100&&t<=150)
        {
                printf("Grade- C\n");
        }
        else if(t>150&&t<=200)
        {
                printf("Grade- B\n");
        }
        else if(t>200&&t<=230)
        {
                printf("Grade- A\n");
        }
        else if(t>230&&t<=250)
        {
                printf("Grade- E\n");
        }
        else if(t>250)
        {
                printf("Grade- O\n");
        }
}
