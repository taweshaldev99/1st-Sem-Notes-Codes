#include<stdio.h>
int main()
{
	float length=0,breadth=0,Perimeter=0 ;
	printf("Enter the value of length and breadth");
	scanf("%f%f",&length,&breadth);
	Perimeter = 2*(length+breadth);
	printf("The perimeter of rectangle is %f",Perimeter);
	return 0;
}
