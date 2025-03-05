#include<stdio.h>
int main()
{
	int num=0,rev=0,rem=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n The reverse of your number is %d",rev);
	return 0;
}
