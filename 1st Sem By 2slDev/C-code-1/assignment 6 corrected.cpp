#include<stdio.h>
#include<stdlib.h>
 struct student
 {
 	char name[50];
 	char faculty[50];
    char email[50];
    int total_marks;
 };
 int main()
 { 
   
 	struct student s[5],temp;
 	int i=0,j=0;
 	printf("Enter the information:\n");
 	for(i=0;i<=4;i++)
 	{   
 	 fflush(stdin);
 		printf("\n Enter the name of student:",i+1);
 		gets(s[i].name);
 		printf("\n Enter the faculty of student:",i+1);
 		gets(s[i].faculty);
 		printf("\n Enter the email of student:",i+1);
 		gets(s[i].email);
 		printf("\n Enter the total marks of student:",i+1);
 		scanf("%d",&s[i].total_marks);
	 }
	 printf("\n The information is:\n");
	 for(i=0;i<=4;i++)
	 {
	 	for(j=i+1;j<=4;j++)
	 	{
	 		if(s[i].total_marks<s[j].total_marks)
	 		{
	 			temp=s[i];
	 			s[i]=s[j];
	 			s[j]=temp;
			 }
		 }
	 }
	 
 }
