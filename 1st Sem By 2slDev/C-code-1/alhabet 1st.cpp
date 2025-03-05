#include<stdio.h>
int main()
{
	char x[]="Ba";
	char y[]="Bat";
	int i=0;
	for(i=0;x[i]!='\0'||y[i]!='\0';i++)
	{
		if(x[i]<y[i])
		{
			printf("%s comes first than %s",x,y);
			break;
		}
		if(x[i]>y[i])
		{
			printf("%s comes first than %s",y,x);
			break;
		}
	}
	
	return 0;
}
