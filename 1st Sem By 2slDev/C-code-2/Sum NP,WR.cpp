#include<stdio.h>
int sum ();
int main()
{
	int z=0;
	z= sum();
	printf("\n Result is %d",z);
	return 0;
}
  int sum()
  {
  	int a=0,b=0,c=0;
  	printf(" Enter a & b: ");
  	scanf("%d%d",&a,&b);
  	c=a+b;
  	return c;
  }
