// WAP to find greatest among three number using ternary operator //
#include<stdio.h>
 int main()
 {
 	int a=0,b=0,c=0, max=0;
 	printf("enter the valur of a,b,c");
 	scanf("%d%d%d",&a,&b,&c);
 	max= a>b ? (a>c?a:c):(b>c?b:c) ;
 	printf(" largest value is %d",max);
 	return 0;
 }
