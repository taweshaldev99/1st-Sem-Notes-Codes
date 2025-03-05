#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char r;
	int sp,c,v;
    p=fopen("E:\\tweshal.txt","r");
    if(p==NULL)
    {
    	printf("FIle not found");
    	exit(0);
	}
	while(fscanf(p,"%c",r)!=EOF)
	{
		printf("%c",r);
		if(r==32)
		{
			sp++;
			
		}
		else if(r=='a'||r=='e'||r=='i'||r=='i'||r=='o'||r=='u'||r=='A'||r=='E'||r=='I'||r=='O'||r=='u')
		{
			v++;
			
		}
		else
		{
			c++;
		}
	}
	printf("No of space is %d",sp);
	printf("No of consonat is %d",c);
	printf("No of vowel is %d",v);
	fclose(p);
	return 0;
	
}
