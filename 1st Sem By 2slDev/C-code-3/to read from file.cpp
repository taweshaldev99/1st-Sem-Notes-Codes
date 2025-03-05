#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x[100];
	int i=0;
	FILE *p,*q;
	p=fopen("E:\\abc.txt","r");
	if(p==NULL)
	{
		printf("No file found");
		exit(0);
	}
	q=fopen("E:\\abc.txt","w");
	if(p==NULL)
	{
		printf("No file found");
		exit(0);
	}
	
    if(fgets(x,100,p)!=NULL)
   	{
   		{
   		 for(x=0;x[i]!='\0';i++)
   		    {
   		 	   if(x>='a'&&x<='z')
   		 	   {
   		 	   	x[i]=x[i]-32;
			   }
		    }
		}
		fprintf(q,"%c",r)
	}
	printf("Successfully copied");
	fclose(p);
	return 0;
	
	
}
