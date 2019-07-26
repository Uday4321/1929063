#include <stdio.h>
void main()
{
        printf("Enter Operator- ");
        char o=getchar();
        int a,b;
        printf("Enter First Number- ");
        scanf("%d",&a);
        printf("Enter Second Number- ");
        scanf("%d",&b);
        switch(o)
        {
        case '+':
                printf("a+b- %d\n",a+b);
                break;
        case '-':
                printf("a-b- %d\n",a-b);
                break;
        case '*':
                printf("a*b- %d\n",a*b);
                break;
        case '/':
                printf("a/b- %d\n",a/b);
                break;
        default:
                printf("Invalid Input\n");
        }
}
