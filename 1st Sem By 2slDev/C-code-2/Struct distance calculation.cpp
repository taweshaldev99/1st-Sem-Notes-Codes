#include<stdio.h>
struct distance
{
	int km;
	int m;
} D1,D2,sum;
int main()
 {
 	int q=0,r=0;
 	printf("Enter value of km and m for D1:");
 	scanf("%d%d",&D1.km,&D1.m);
 	printf("Enter value of km and m for D2:");
 	scanf("%d%d",&D2.km,&D2.m);
 	sum.km=D1.km+D2.km;
 	sum.m=D1.m+D2.m;
 	if(sum.m>=1000)
 	{
 		q=sum.m/1000;
 		r=sum.m%1;
 		sum.m=r;
 		sum.km=sum.km+q;
	 }
	 printf("\n The sum is %d km",sum.km);
	 return 0;
 }
