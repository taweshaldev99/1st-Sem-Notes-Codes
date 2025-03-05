#include<stdio.h>
#include<stdlib.h>
 struct student
 {
 	int age;
 	int id;
 	char name [50];
 };
 
int n=0;
struct student s[100];
int main()
{
	int i=0,id=0,x=1;
	printf("Enter how many number of details of studnt you want to input:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n Enter age of student %d:",i+1);
	scanf("%d",&s[i].age);
	printf("\n Enter id of student %d:",i+1);
	scanf("%d",&s[i].id);
	fflush(stdin);
	printf("\n Enter nameof student %d:",i+1);
	gets(s[i].name);
	}
	printf("\n Enter id of stduent");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
    	if(id==s[i].id)
    	{
    		x=1;
    		fflush(stdin);
    		printf("\n  Name of %s ",s[i].name);
    		printf("\n  id of %d ",s[i].id);
    		printf("\n  age of %d ",s[i].age);
    		break;
		}
		else 
		{
		  x=0;
		}
	}
	if(x==0)
	{
		printf("\n no record found");
	}
	return 0;
}

