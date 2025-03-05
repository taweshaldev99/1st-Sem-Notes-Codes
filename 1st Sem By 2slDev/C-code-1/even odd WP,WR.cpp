#include<stdio.h>
int check(int);
int main()
{
	int num=0,result=0;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	result= check(num);
	if(result==0)
	{
		printf("\n It is Even");
	}
	else
	{
		printf("\n It is odd");
	}
	return 0;
}
int check (int x)
{
	int z;
	z=x%2;
	return z;
}
