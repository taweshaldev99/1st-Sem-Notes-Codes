#include<stdio.h>
int main()
{
	int i=0,Upper=0,lower=0;
	char x[20];
	printf("Enter a word: ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]>=65&&x[i]<=90)
		{
		  Upper++;	
		}
		else if(x[i]>=97&&x[i]<=122)
		{
		  lower++;
		}
		
		
		}	
	 printf("\n The total no. of Lower letter is %d",lower);
	 printf("\n The total no. of Upper letter is %d",Upper);
	return 0;
}
