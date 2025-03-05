#include<stdio.h>
int main()
{
	int num=0,a=0,b=0,sum=0;
	printf("Enter any number to find sum:");
	scanf("%d",&num);
	b=num%10;
	a=num;
	while(num>=10);
	{
		num=num/10;
	}
	a=num;
	sum=a+b;
	printf("%d is the sum",sum);
	return 0;
}
