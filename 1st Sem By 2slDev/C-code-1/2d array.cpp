#include<stdio.h>
int main()
{
	int i=0,j=0;
	int a[3][2],b[i][j];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("Enter a[%d][%d] element :",i,j);
            scanf("%d",&a[i][j]);
		    b[i][j]=a[i][j];
		}
		printf("\n");
	}
	return 0;
}
