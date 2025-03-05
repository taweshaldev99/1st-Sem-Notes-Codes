#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int roll;
	int M_in_C;
	int M_in_math;
	int M_in_eng;
};
int main()
{
	struct student s[2];
  int i=0,Marks=0;
  printf("\n Entering the info:\n");
  
  for(i=0;i<=1;i++)
  { fflush(stdin);
  	printf("\n Enter the name:",i+1);
  	gets(s[i].name);
  	printf("\n Enter the roll:",i+1);
  	scanf("%d",&s[i].roll);
  	printf("\n Enter the M_in_C:",i+1);
  	scanf("%d",&s[i].M_in_C);
  	printf("\n Enter the M_in_math:",i+1);
  	scanf("%d",&s[i].M_in_math);
  	printf("\n Enter the M_in_eng:",i+1);
  	scanf("%d",&s[i].M_in_eng);
	}
	printf("\n Displaying passed students info");
	for(i=0;i<=1;i++)
	{
	if(s[i].M_in_C>=39)
	{
		printf("Name is %s",s[i].name);
		printf("\n Roll is %d",s[i].roll);
	}		
	}
	
	return 0;
}
 
