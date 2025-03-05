#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[50];
	int age;
	int id;
} ;
int n=0;
int main()
{ 
struct student s[100];
	int i=0;
	printf("Enter how many no. of stdent detail you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{ 
fflush(stdin);
	printf("\n Enter the name of %d:",i+1);
	gets(s[i].name);
	printf("\n Enter the age and id of %d:",i+1);
	scanf("%d %d",&s[i].age,&s[i].id);
}
printf("\n The information of students are:");
for(i=0;i<n;i++)
{
	printf("\n The name of student %d is %s",i+1,s[i].name);
    printf("\n The id of student %d is %d",i+1,s[i].id);
    printf("\n The age of student %d is %d",i+1,s[i].age);
}
return 0;
}

