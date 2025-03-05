#include<stdio.h>
int x(int,int);
int main()
{
	int a=0,b=0,c=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=x(a,b);
	printf("\n result is %d",c);
	return 0;
}
int x(int m, int n)
{
  int z;
  z= m+n;
  return z;
}
