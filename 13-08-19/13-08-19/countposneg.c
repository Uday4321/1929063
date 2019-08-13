#include <stdio.h>
void main()
{	
	int n;
	int po=0,ne=0;
	while(n!=0)
	{	
		printf("Enter Number- ");
		scanf("%d",&n);
		if(n>0)
			{
				po++;
			}
		else if(n<0)
			{
				ne++;
			}
	}
	printf("Positive Numbers- %d\nNegative Numbers- %d\n",po,ne);
}
