#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int salary;
	int id;
};
 int main()
 {
 	struct student s[3];
 	int i=0;
 	printf("\n Entering info:\n");
 	for(i=0;i<=2;i++)
 	{
 		fflush(stdin);
 		printf("Enter the name of student\n",i+1 );
 		gets(s[i].name);
 		fflush(stdin);
 		printf("Enter the id of student\n",i+1 );
 		scanf("%d",&s[i].id);
 		printf("Enter the salary of student\n",i+1 );
 		scanf("%d",&s[i].salary);
    }
    printf("Displaying Info:\n");
    for(i=0;i<=2;i++)
    {
    	if(s[i].name[0] == 'D' )
    	{
    		printf("The name of stduent is %s",s[i].name);
    		printf("The id student is %d",s[i].id);
    		printf("The salary of student is %d",s[i].salary);
		}
	}
    return 0;
 }
