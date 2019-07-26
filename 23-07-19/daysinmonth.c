#include <stdio.h>
void main()
{
        int m;
        printf("Enter Month Number- ");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("31 Days\n");
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                printf("30 Days\n");
                break;
        case 2:
                printf("28 or 29 Days\n");
                break;
        default:
                printf("Invalid Input\n");
        }
}
