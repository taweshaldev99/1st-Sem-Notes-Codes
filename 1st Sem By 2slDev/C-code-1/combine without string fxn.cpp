#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,l1=0,l2=0;
	char x[100],y[100];
	printf("Enter the 1st string:\n");
	puts(x);
	printf("Enter the 2nd string:\n");
	puts(y);
	for(i=0;x[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;y[i]!='\0';i++)
	{
		l2++;
	}
	for(i=0;i<=l2;i++)
	{
	   x[l1+i] =y[i];
	}
	printf("The string after concatenation is:%s\n");
	puts(y);
	return 0;
}
