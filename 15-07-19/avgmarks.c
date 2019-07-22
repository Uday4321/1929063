#include <stdio.h>
void main()
{
        double m1,m2,m3,m4,m5;
        printf("Enter Marks in Subject 1- ");
        scanf("%lf",&m1);
        printf("Enter Marks in Subject 2- ");
        scanf("%lf",&m2);
        printf("Enter Marks in Subject 3- ");
        scanf("%lf",&m3);
        printf("Enter Marks in Subject 4- ");
        scanf("%lf",&m4);
        printf("Enter Marks in Subject 5- ");
        scanf("%lf",&m5);
        double avg=(m1+m2+m3+m4+m5)/5;
        printf("Average Marks= %f\n",avg);
        printf("Percentage= %f%\n",avg);
}
