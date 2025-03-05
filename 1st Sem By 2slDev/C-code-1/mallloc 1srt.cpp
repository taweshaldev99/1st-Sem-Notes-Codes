#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int *p,i=0;

	p=(int*)malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("Sorry");
		exit(0);
	}
	for(i=0;i<=4;i++)
	{
		printf("Enter number");
		scanf("%d",p+i);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n no. %d value is %d",i+1,*(p+i));
	}
	return 0;
}
