#include<stdio.h>
int main()
{
	int x=0,y=0,quadrant=0;
	printf("Enter the point for x and y:\n");
	scanf("%d%d",&x,&y);
	if(x>=0&&y>=0)
	{
		printf("It lies in 1st quadrant");
	}
	else if(y>=0&&x<=0)
	{
		printf("It lies in 2nd quadrant");
	}
	else if (x<=0&&y<=0)
	{
			printf("It lies in 3rd quadrant");
	}
	else if(x>=0&&y<=0)
	{
		printf("It lies in 4th quadrant");
	}
	else
	{
		printf(" The end");
	}
	return 0;
}
