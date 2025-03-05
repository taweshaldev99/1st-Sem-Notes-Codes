#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int roll;
	char faculty[50];
	int total;
};
int main()
{
	struct student s[3];
	int i=0,j=0,temp=0;
	for(i=0;i<3;i++)
	{   
		printf("\nEnter name of student:",i+1);
		gets(s[i].name);
		fflush(stdin);
		printf("\nEnter faculty:",i+1);
		gets(s[i].faculty);
		fflush(stdin);
		printf("\nEnter the roll:",i+1);
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("\nEnter the total marks:",i+1);
		scanf("%d",&s[i].total);
		fflush(stdin);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].total<s[j].total)
			{
				temp=s[i].total;
				s[i].total=s[j].total;
				s[j].total=temp;
			}
		}
	}
	printf("Displaying the info:");
	for(i=0;i<3;i++)
	{   fflush(stdin);
		printf("The name of student is %s",s[i].name);
		printf("The faculty is %s",s[i].faculty);
		printf("The total is %d",s[i].total);
		printf("The roll is %d",s[i].roll);
    }
   return 0;
}
