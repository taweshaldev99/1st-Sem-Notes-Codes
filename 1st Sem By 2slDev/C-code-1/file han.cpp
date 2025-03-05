#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[5],i=0;
	FILE *p;
	
	
	p=fopen("D:\\RANDOM.txt","w+");
	if(p==NULL)
	{
		printf("Not found");
		exit(0);
		
	}
	for (i=0;i<5;i++)
	{
		printf("Enter %d value",i+1);
		scanf("%d",&x[i]);
		fprintf(p,"%d",x[i]);
	}
	fclose(p);
	return 0;
}
