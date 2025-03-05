#include<stdio.h>
int main()
{
	int i=0,j=0;
	char x[100],y[100];
	printf("Enter 1st string:\n");
	gets(x);
	printf("Enter 2nd string:\n");
	gets(y);
	for(i=0,j=0;x[i]!='\0',y[j]!='\0';i++,j++)
	{
		if(x[i]==y[j])
		{
			printf("Both are identical");
		}
		else
		{
			printf("Both are unidentical");
		}
	}
	return 0;
}
