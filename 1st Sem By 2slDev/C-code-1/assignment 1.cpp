#include<stdio.h>
 int main()
 {
 	char x[6]="NEPAL";
 	int i=0,j=0;
 	for(i=0;i<=4;i++) 
	  {
 		for(j=0;j<=i;j++)
 		{
 			printf("%c",x[j]);
		 }
		 printf("\n");
	  } 
	return 0;  
 }
