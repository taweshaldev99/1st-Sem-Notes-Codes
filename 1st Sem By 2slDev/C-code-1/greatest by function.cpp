#include<stdio.h>
int greatest(int[],int);
int main()
{ 
    int a[100],n=0,i=0,result=0;
    printf("Enter how many number you want to input:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
    	printf("Enter value");
    	scanf("%d",&a[i]);
	}
	result=greatest(a,n);
	printf("\n The greatest is %d",result);
	return 0;
}
 int greatest(int x[],int y)
 {
 	int gt=0,j=0;
 	for(j=0;j<=y-1;j++)
 	{
 		if(x[j]>gt)
 		{
 			gt=x[j];
		 }
	 }
	 return gt;
 }
