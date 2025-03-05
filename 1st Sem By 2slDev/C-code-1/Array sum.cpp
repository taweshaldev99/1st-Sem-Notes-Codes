#include<stdio.h>
int main()
{
	int a[5],i=0, sum=0;
    for(i=0; i<=4; i++)
{
	printf("enter the value for a[%d]",i);
	scanf("%d",&a[i]);
	sum= sum+a[i];
	{
		printf("the sum of array is %d",sum);
	}
}
return 0;
}
