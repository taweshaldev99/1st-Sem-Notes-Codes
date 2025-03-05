#include<stdio.h>
int main()
{
	char x[6]="Nepal";
	int i=0,j=0;
	for(i=0;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("%c",x[j]);
		}
		printf("\n");
	}
	return 0;
}
