#include<stdio.h>
#include<math.h>
int main()
{
	float p=0,t=0,r=0,CI=0;
printf("Enter value for p,t,r: ");
scanf("%f%f%f",&p,&t,&r);
CI=p * pow((1 + r/100), t);
printf("\n The value of CI is %f",CI);
return 0;

}
