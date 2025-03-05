#include<stdio.h>
 struct Student{
 	char name[50];
 	char faculty[50];
    char email[50];
    int total_marks;
 };
 int main()
 {
 	struct student s[5];
 	int i=0,test=0,j=0
 	printf("Enter the information\n");
 	for(i=0;i<=4;i++)
 	{
 		printf("\n Enter the name of student:"),i+1;
 		gets(s[i].name);
 		printf("\n Enter the faclty of student:",i+1);
 		gets(s[i].faculty);
 		printf("\n Enter the email of student:",i+1);
 		gets(s[i].email);
 		printf("\n Enter the total marks of student:",i+1);
 		scanf("%d",&s[i].total_marks);
	 }
	 printf("\n The information is:\n");
	 for(i=0;i<=4;i++)
	 {
	 	if(j=i+1;j<=4;j++)
	 	{
	 		if(s[i].total_marks<x[j].total marks)
	 		{
	 			test=x[j];
	 			x[j]=x[i];
	 			x[i]=test;
			 }
		 }
	 }
 }
