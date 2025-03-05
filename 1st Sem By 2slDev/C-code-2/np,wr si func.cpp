#include<stdio.h>
float x();
int main()
{
	float z=0;
	z=x();
	printf("\n Result is %f",z);
	return 0;
}
 float x()
 {
 	float p=0,t=0,r=0,si=0;
    printf("Enter value for p,t,r: ");
	scanf("%f%f%f",&p,&t,&r);
	si=(p,t,r)/100;
 	return si;
 }
