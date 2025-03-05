#include<stdio.h>
struct marks_record
{
	char name[45];
	int roll, marks;
};
int main()
{
	marks_record x,y;
	printf("Enter name, roll and marks:");
	gets(x.name);
	scanf("%d%d",&x.roll,&x.marks);
	printf("Enter name, roll and marks:");
	gets(y.name);
	scanf("%d%d",&y.roll,&y.marks);
}
