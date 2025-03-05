#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0,a,b,f[50][50],g[50][50];
	printf("Enter no. of rows and column for 1st matrix:");
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++)
	{
	for(j=0;j<b;j++)
	{
		printf("Enter element [%d][%d]:",i+1,j+1);
		scanf("%d",&f[i][j]);
	}	
	}
	for(i=0;i<a;i++)
	{
	for(j=0;j<b;j++)
	{
	  g[j][i]=f[i][j];
	}
	}
	printf("\nTranspose of the matrix:\n");
  for (i = 0; i < a; ++i)
  {
  	for ( j = 0; j < b; ++j)
   {
    printf("%d\n", g[i][j]);
    if (j == a- 1)
    printf("\n");
  }
  }
	return 0;
}
