#include<stdio.h>
int main()
{
	int i=0,total=0,space=0,alphabet=0,v=0,V=0,consonant=0,n=0,sp=0,word=0;
	char x[50];
	printf("Enter a sentence: ");
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
			else{
				consonant++;
			}
		}
		else if(x[i]>=48&&x[i]<=57)
		{
			n++;
		}
		else{
			sp++;
		}
	}
	 word=vvspace+1;
	 printf("\n The total no. of space in the sentence is %d ",space);
	 printf("\n The total no. of word is %d",word);
	 printf("\n The total no. of character is %d",total);
	 printf("\n The total no. of vowels is %d",v);
	 printf("\n The total no. of alphabet is %d",alphabet);
	 printf("\n The total no. of consonants is %d",c);
	 printf("\n The total no. of special character is %d",sp);
	 return 0;	
}
