#include <stdio.h>
void main()
{	
	int n=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("*");
		}
		n++;
		printf("\n");
	}
}
