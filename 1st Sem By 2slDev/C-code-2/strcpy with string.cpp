#include<stdio.h>
#include<string.h>
int main()
{
	char x[100], y[100];
	int i=0;
	printf("Enter a string in x:");
	gets(x);
	for(i=0;x[i]|='\0';i++)
	{
		y[i]=x[i];
	} 
    puts(y);

    return 0;
}
