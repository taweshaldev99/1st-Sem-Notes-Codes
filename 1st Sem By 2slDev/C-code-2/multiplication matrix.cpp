#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
	int i=0,j=0,k=0,m,n,p,q,sum=0,a[N][N],b[N][N],c[N][N];
	printf("Enter no. of row and column for 1st matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter 1st matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Enter no. of row and column for 2nd matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter 2nd matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("\n First Mtrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{ 
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n Second Mtrix is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	if(n!=p)
	{
		printf("Can't multiply");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				sum=0;
				for(k=0;k<m;k++)
				{
					sum=sum+(a[i][k]*b[k][j]);		
				}
				c[i][j]=sum;	
			}
		}
		printf("Multiplication is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++);
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
