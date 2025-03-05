#include<stdio.h>
#include<stdlib.h>
int mainI()
{
	int *p;
	int i=0,num=0;
	printf("Enter how many no. you want:");
	scanf("%d",&num);
	p=(int *)malloc(num* sizeof (int ));
	if(p==NULL)
	{
		printf("NO memory allocation");
		exit(0);
	}
	for(i=0;i<num;i++)
	{
		printf("Enter value");
		scanf("%d",p+i);
	}
	printf("Displaying the value:");
	for(i=0;i<num;i++)
	{
		printf("%d",*p+i);
	}
	free(p);
	return 0;
}
