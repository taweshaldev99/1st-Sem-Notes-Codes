// Program to concatenate x & y
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,l1=0,l2=0;
	char x[50]="Kist ";
	char y[50]="College";
	l1=strlen(x);
	l2=strlen(y);
	for(i=0; i<=l1+1+i;i++)
   {
      x[l1+1+i]=y[j];
   }
   // \0 represents end of string
   x[i]='\0';
	printf("The obtained concatenate string is %s\n",x);
	return 0;
}
