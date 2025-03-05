#include<stdio.h>
void check(int);
int main()
{
	int num=0;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	check(num);
	return 0;
} 
void check (int x)
{
	int result=0;
	result=x%2;
	if ( result==0)
	printf("\n It is even");
	else
	printf("\n It is odd");
	
}
