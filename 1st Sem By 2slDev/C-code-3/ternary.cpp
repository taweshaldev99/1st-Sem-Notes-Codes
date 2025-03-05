#include<stdio.h>
int main()
{
	int a,b,c, large;
	printf("\n Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	large=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n Largest number is %d",large);
	return 0;
}
