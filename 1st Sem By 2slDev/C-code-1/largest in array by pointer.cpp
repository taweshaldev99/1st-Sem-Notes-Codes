#include<stdio.h>
int main() 
  {
  	int x[100],i=0,n=0,gt=0;
  	int *p,*q;
  	p=&n;
  	q=&gt;
  	printf("eNTER HOW MANy you want to input:",x+1);
  	scanf("%d",&x[i]);
  	for(i=0;i<=x[i];i++)
  	{
  		printf("\n Enter a number:\n");
  		scanf("%d",p);
  		if(p>q)
  		{
  			q=p;
		}
    }
    printf("\n the grestest is %d",*p);
  	return 0;
  }
