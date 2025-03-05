#include<stdio.h>
int main()
{
	int i=0,count=0;
	char x[25];
	printf("Enter a word: ");
	scanf("%c",&x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==x)
    	{
          count++;
		}
	}
	return 0;
}

