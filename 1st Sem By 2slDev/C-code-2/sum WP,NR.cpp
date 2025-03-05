#include<stdio.h>
void sum(int,int);
int main()
{
	int a=0,b=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
 void sum(int m,int n)
 {
 	int z;
 	z=m+n;
 	printf("\n Result is %d",z);
 }

