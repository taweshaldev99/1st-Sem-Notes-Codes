#include<stdio.h>
 int fact(int);
 int main()
 {
 	int num=0, x=0;
 	printf("Enter a number:");
 	scanf("%d",&num);
    x=fact(num);
 	printf("Result is %d",x,num);
      return 0;
 }
 int fact(int p)
 {
 	if(p==0)
 	return (1);
 	return(p*fact(p-1));
 }
 
