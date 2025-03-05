#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	char y[50];
	int i=0,j=0,c=0;
	printf("Enter the 1st string:\n");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		y[j]=x[i];
		j++;
	}
	printf("The reverse is :");
    puts(y);
	return 0;
}
