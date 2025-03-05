#include<stdio.h>
int main()
{
	int i=0, sum=0,num=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while (num!= 0) 
	{
        sum = sum + num % 10;
        num = num / 10;
    }
    printf(" the sum is %d",sum);
	return 0;
}
