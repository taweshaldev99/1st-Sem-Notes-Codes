#include<stdio.h>
int main()
{
	int i=0;
	char x[50][50];
    printf("\n Enter 3 names:");
    for(i=0;i<3;i++)
    {
    	printf("\n The name of %d:",i+1);
    	scanf("%s",x[i]);
	}
	printf("\n The name is:");
	for(i=0;i<3;i++)
	{
		printf("\n The name of %d is %s",i+1,x[i]);
	}
	return 0;
	
}
