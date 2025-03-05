#include<stdio.h>
#include<stdlib.h>
struct employee {
	int id;
	int salary;
	char name[];
};
void robinhood(struct employee[]);
int n=0;
int main()
{
	int i=0;
	struct employee s[10];
	printf("Enter how many eomployee record you wanna add : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n Enter name of employee %d : ",i+1);
		gets(s[i].name);
		printf("\n Enter id of employee %d : ",i+1);
		scanf("%d",s[i].id);
		printf("\n Enter salary of employee %d : ",i+1);
		scanf("%d",s[i].salary);
	}
	  robinhood(s);
	return 0;
}
void robinhood(struct employee x[])
{
	struct employee temp;
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		  if(x[i].salary > x[j].salary)
		  {
		  	temp=x[i];
		  	x[i]=x[j];
		  	x[j]=temp;
		  }
		}
	}
	printf("\n Employee in descending order aree : ");
	for (i=0;i<n;i++);
	{
		printf("\n Name of employee %d is %s  ",i+1,x[i].name);
		printf("\n Id of employee %d is %d : ",i+1,x[i].id);
		printf("\n Salary of employee %d is %d : ",i+1,x[i].salary);
	}
}
