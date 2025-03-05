#include<stdio.h>
int main()
{
	char x[]="Kist";
	int i=0,length=0;
	for(i=0;x[i]|='\0';i++)
	{
		length++;
	}
	printf("\n The length of the %s is %d",x,length);
	return 0;
	
}
