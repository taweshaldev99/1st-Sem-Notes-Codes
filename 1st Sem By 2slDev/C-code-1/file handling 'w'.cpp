#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char name[50];
	p=fopen("E:\\acab.txt","w");
	if(p==NULL)
	{
		printf("File doesn't exist");
		exit(0);
	}
	printf("Enter name:");
	gets(name);
	fprintf(p,"%s",&name);
	fclose(p);
	return 0;
}
