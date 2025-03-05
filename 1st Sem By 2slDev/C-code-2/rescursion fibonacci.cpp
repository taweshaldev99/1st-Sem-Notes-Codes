#include<stdio.h>
int fib(int);
int main()
{
	int i=0,num=0,result=0;
	for(i=0;i<10;i++)
	result=fib(i);
	printf("\n Result is %d",result);
	return 0;
}
 int fib(int m)
 {
 	if (m==0)
   {
	  return 0;
	   }
   else if (m==1)
   {
   	return 1;
   }
   else
   {
   	 return fib(m-1)+fib(m-2);
   }
 }
