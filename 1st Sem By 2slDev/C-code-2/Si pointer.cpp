#include<stdio.h>
int main()
{
float p=0,t=0,r=0,SI=0;
float *a=0,*b=0,*c=0,*d=0;
 a=&p;
 b=&t;
 c=&r;
 d=&SI;
printf("Enter the value for p,t,r:");
scanf("%f%f%f",a,b,c);
*d=(*a**b**c)/100;
printf("The SI is %f",*d);
 	return 0;
 }
