#include<stdio.h>
int main()
{
	int i=0,j=0;
	char x[6]="NEPAL";
	for(i=0;i<=4;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%c",x[j]);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",x[j]);
		}
		printf("\n");
	}
	return 0;
	}
	
