#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	char str2[50];
	int z;
	printf("Enter 1st string:");
	scanf("%s",&str1);
	strlwr(str1);
	printf("Enter 2nd string:");
	scanf("%s",&str2);
	strlwr(str2);
	z=strcmp(str1,str2);
	printf("\n The result is %d",z);
	return 0;
} 

