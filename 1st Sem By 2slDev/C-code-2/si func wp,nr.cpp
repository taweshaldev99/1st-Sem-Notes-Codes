#include<stdio.h>
void x(float,float,float);         // declaration
int main()
{
	float p=0,t=0,r=0;
	printf("Enter value for p,t,r: ");
	scanf("%f%f%f",&p,&t,&r);
	x(p,t,r);    // call
	
	return 0;
}
 void x(float e,float f,float g)
 {
 	float z;
 	z=(e*f*g)/100;
 	printf("\n the result is %f",z);
 
 }
