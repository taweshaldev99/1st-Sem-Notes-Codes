#include<stdio.h>
int main()
{
int num1=0,num2=0,result=0;
int*a=0,*b=0,*c=0;
 a=&num1;
 b=&num2;
 c=&result;
 	printf("Enter 1st and 2nd number:");
	scanf("%d%d",a,b);
 	*c=*a+*b;
 	printf("The sum is %d",*c);
 	return 0;
 }
