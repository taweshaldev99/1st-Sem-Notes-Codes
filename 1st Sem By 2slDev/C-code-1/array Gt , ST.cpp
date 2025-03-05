#include<stdio.h>
int main()
{
	int a[5],i=0,gt=0, st=9999;
	for(i=0;i<=4;i++)
	{
		printf("enter value for a[%d]",i);
		scanf("%d",a[i]);
		if(a[i]>gt)
		{
			gt=a[i];
		}
		if(a[i]<st)
		{
			st=a[i];
		}
		printf(" Greatest %d",gt);
		printf(" Smallest %d", st);
	}
	return 0;
}
