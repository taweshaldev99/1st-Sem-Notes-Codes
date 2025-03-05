#include<stdio.h>
int main()
{
	int num1=0,num2=0,result=0;
	int *a,*b,*c;
	a=&num1;
	b=&num2;
	c=&result;
	printf("\nEnter the value of num1,num2:\n");
	scanf("%d%d",*a,*b);
	*c=*a+*b;
	printf("Result is %d",*c);
	return 0;
}
