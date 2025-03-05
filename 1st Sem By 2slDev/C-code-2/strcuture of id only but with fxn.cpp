#include<stdio.h>
#include<stdlib.h>

struct student{
	int age;
	int id;
	char name[50];
};
 void student (struct student[],int);
struct student s[100];
int main()
{
	int i=0,n=0;
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
	student (s,n);
	return 0;
}
  void student (struct student t[],int y)
  {
  	int id=0, x=1;
  	printf("Enter id of student:");
  	scanf("%d",&id);
  	for(i=0;i<n;i++)
  	{
  		if(id==t[i].id)
  		{
  			x=1;
  			fflush(stdin);
  			printf("\n name is %s",t[i].name);
  			printf("\n id is %d",t[i].id);
  			printf("\n age is %d",t[i].age);
  			break;
		  }
		  else
		  {
		  	x=0;
		  }
		  }
		  if (x==0)
		  {
		  	printf("\n Invalid");
		  }  
  }
