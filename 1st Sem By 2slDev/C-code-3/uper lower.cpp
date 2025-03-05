#include<stdio.h>

int main()
{
	int i=0,upper=0,lower=0;
	char x[50];
	printf("Enter a word:");
	gets(x);
	for(i=0;x[i]|='\0';i++)
	{
		if(x[i]>=65&&x[i]<=90)
		{
			upper++;
		}
		else if( x[i]<=97&&x[i]>=122)
		{
			lower++;
			
		}
		else 
		{
			continue;
		}
	}
	return 0;
}

