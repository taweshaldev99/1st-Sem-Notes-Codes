// Program to concatenate x & y
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,count=0;
	char x[50]="Kist";
	char y[50]="College";
	for(i=0;x[i]!='\0';i++)
	{
		count++;
	}
	x[count]=' ';
	for(i=count+1;y[j]!='\0';i++)
	{
		x[i]=y[j];
		j++;
	}
	printf("The obtained concatenate string is %s\n",x);
	return 0;
}
