#include<stdio.h>
int main()
{
	int i =0,flag=0;
	char a[50],b[50];
	printf("Enter 1st string:"); //a="Taweshal"
	gets(a);
	printf("Enter 2nd string:");  //b="Tweshal"
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&b[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	for(i=0;b[i]!='\0';i++)
    {
    		if(b[i]>='A'&&b[i]<='Z')
		{
			b[i]=b[i]+32;
		}
	}
	for(i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if(a[i]>b[i])
		{
			flag=1;
			break;
		}
		else if(a[i]<b[i])
		{
			flag=2;
			break;
		}
		else
		{
			flag=3;
		}
	}
		if(flag==1)
	{
		printf("b comes alphabetically first than a");
	}
	if(flag==2)
	{
		printf("a comes alphabetically first than b");
	}
	if(flag==3)
	{
		printf("all are equal");
	}
return 0;
	}
