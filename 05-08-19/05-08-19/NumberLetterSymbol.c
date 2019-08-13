#include <stdio.h>
void main()
{	
	char c='A';
	int d=1;
	int n;
	printf("Enter Odd Number- ");
	scanf("%d",&n);
	int x=n/2,y=1,z=0;
	for(int i=0;i<(n+1)/2;i++)
	{
			for(int j=0;j<x;j++)
			{
				if(z%2==1)
				{
					if(c>'Z')
			{
				c='A';
			}
					printf("%c  ",c);
					c++;
					z++;
				}
				else
				{
					if(d>9)
					{
						d=1;
					}
					printf("%d  ",d);
					d++;
					z++;
				}
				
			}
			for(int j=0;j<y;j++)
			{
				if(z%2==1)
				{
					printf("+  ");
				}
				else
				{
					printf("*  ");
				}
			}
			for(int j=0;j<x;j++)
			{
				if(z%2==1)
				{
				if(c>'Z')
			{
				c='A';
			}
					printf("%c  ",c);
					c++;
					z++;
				}
				else
				{
					if(d>9)
					{
						d=1;
					}
					printf("%d  ",d);
					d++;
					z++;
				}
			}
			y+=2;
			x--;
			printf("\n");
	}
	x=1;
	y=n-2;
	for(int i=0;i<(n-1)/2;i++)
	{
			for(int j=0;j<x;j++)
			{
				if(z%2==1)
				{
				if(c>'Z')
			{
				c='A';
			}
					printf("%c  ",c);
					c++;
					z++;
				}
				else
				{
					if(d>9)
					{
						d=1;
					}
					printf("%d  ",d);
					d++;
					z++;
				}
			}
			for(int j=0;j<y;j++)
			{
				if(z%2==1)
				{
					printf("+  ");
				}
				else
				{
					printf("*  ");
				}
			}
			for(int j=0;j<x;j++)
			{
				if(z%2==1)
				{
				if(c>'Z')
			{
				c='A';
			}
					printf("%c  ",c);
					c++;
					z++;
				}
				else
				{
					if(d>9)
					{
						d=1;
					}
					printf("%d  ",d);
					d++;
					z++;
				}
			}
			y-=2;
			x++;
			printf("\n");
	}
}
