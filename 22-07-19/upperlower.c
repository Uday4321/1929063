#include <stdio.h>
void main()
{
        char c;
        printf("Enter Character- ");
        c=getchar();
        if(c>=65&&c<=90)
        {
                printf("Upper Case\n");
                printf("Character in Opposite Case- %c\n",c+32);
        }
        else
        {
                printf("Lower Case\n");
                printf("Character in Opposite Case- %c\n",c-32);
        }
}
