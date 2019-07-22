#include <stdio.h>
void main()
{
        char c;
        printf("Enter Character- ");
        c=getchar();
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
                printf("Vowel\n");
        }
        else
        {
                printf("Consonant\n");
        }
}
