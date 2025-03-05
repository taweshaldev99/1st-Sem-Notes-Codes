#include<stdio.h>
 int main()
 {
 	int a[5],b[5],c[5],i=0;
 	for (i=0;i<=4;i++)
 	{
 		printf("enter valur for a[%d]",i);
 		scanf("%d",&a[i]);
 		printf("enter value for b[%d]",i);
 		scanf("%d",&b[i]);
 		c[i]=a[i]+b[i];
	 }
	 for(i=0;i<=4;i++)
	 {
	 	printf("value of c[%d] is %d",i,c[i] );
	 }
	 return 0;
 }
