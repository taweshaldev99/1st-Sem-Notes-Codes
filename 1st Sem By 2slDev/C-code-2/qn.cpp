#include<stdio.h>
int main()
{
	int a=6,b=2,x=0;
	while(--a>0&&b++<=7)
	{
		if(a%2==0)
		{
			x+=b/2;
		}
	}
	printf("\n a=%d",&a);
	printf("\n b=%d",&b);
	printf("\n x=%d",&x);
	return 0;
}
