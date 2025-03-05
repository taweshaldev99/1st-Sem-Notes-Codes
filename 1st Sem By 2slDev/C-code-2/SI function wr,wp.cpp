#include<stdio.h>
float x(float,float,float);  //declaration
int main()
{
	float p=0,t=0,r=0,si=0;
	printf("Enter value for p,t,r: ");
	scanf("%f%f%f",&p,&t,&r);
	si=x(p,t,r);             // call
	printf("\n Result is %f",si);
	return 0;
}
 float x(float e,float f,float g)
 {
 	float z;           // defn
 	z=(e*f*g)/100;
 	return z;
 }
