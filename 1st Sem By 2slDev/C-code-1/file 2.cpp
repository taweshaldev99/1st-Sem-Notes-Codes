#include<stdio.h>
#include<stdlib.h>
int main ()
{
	FILE *p;
	int i=0 ;
	char x[100];
	p=fopen("E:\\abc.text","w");
	if(p==NULL)
	{
		printf("Sorry can't open the file");
		exit(0);
	}
	printf("Enter the sentence:\n");
	gets(x);
	fprintf(p,"%s",&x);
	fclose(p);
	return 0;
}

