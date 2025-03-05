#include<stdio.h>
 int r=0,c=0;
int main()
{
	int i=0,j=0,space=0;
	printf("Enter no. of rows :\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{ 
		for (space=5;space>=i;space--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
