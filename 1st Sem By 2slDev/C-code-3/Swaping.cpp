#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("enter value of a and b");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("value of a is %d and value of b is %d",a,b);
	return 0;
}
