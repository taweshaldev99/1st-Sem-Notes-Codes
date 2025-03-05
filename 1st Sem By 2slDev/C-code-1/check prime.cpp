#include<stdio.h>
int main()
{
	int n=0,i=0;
	printf("Enter a integer :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n%i==0)
	 {
			printf("It is prime number");
		}
		else
		{
			printf("It is not a prime number");
		}
	}
	return 0;
}
