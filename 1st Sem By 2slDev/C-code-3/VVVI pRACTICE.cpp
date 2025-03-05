#include<stdio.h>
int main()
{
	int i=0,total=0,space,alphabet,v=0,V=0,consonant=0,number=0,word=0,sp=0;
	char x[100];
	printf("Enter a sentence:");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		total++;
		if(x[i]==32)
		{
			space++;
		}
		else if((x[i]>=65&&x[i]<=90)||(x[i]>=97&&x[i]<=122))
		{
			alphabet++;
			if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
			{
				v++;
			}
			 else if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
			 {
			 	V++;
			 }
			 else
			 {
			 	consonant++;
			 }
		}
		else if(x[i]>=48&&x[i]<=57)
		{
			number++;
		}
		else
		{
		   sp++;
		}
		}
		word=space+1;
		printf("\n Total no is %d",number);
		printf("\nTotal no. of space is %d",space);
		printf("\nTotal no. of consonant is %d",consonant);
		printf("\nTotal no. of alphabet is %d",alphabet);
		printf("\nTotal no. of small vowel is %d",v);
		printf("\nTotal no. of capital is %d",V);
		printf("\nTotal no. of special character is %d",sp);
       	return 0;
	}

