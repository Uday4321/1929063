#include <stdio.h>
void main()
{	
	int l,n=1;
	printf("Enter lines- ");
	scanf("%d",&l);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("*");
		}
		n++;
		printf("\n");
	}
}
