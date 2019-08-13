#include <stdio.h>
void main()
{	
	int n=1;
	printf("%d\n",n);
	for(int i=0;i<6;i++)
	{	
		if(n%2==1)
		{
			n=n*10;
		}
		else
		{
			n=(n*10)+1;
		}
		printf("%d\n",n);
	}
}
