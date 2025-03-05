#include<stdio.h>
int main()
{
	char x[50];
	int i=0;
    printf("\n Enter your name:",i+1);
    gets(x);
    printf("\n Displaying name 10 times:\n");
    for(i=0;i<=10;i++)
    {
    	printf("\n Name %d is %s",i+1,x);
	}
	return 0;
}
