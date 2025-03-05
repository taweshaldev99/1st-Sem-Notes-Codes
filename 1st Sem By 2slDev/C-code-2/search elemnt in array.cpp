#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[100],i=0,n=0,toSearch=0,found;
	printf("Enter how many number you want to input:");
	scanf("%d",&n);
    printf("\n Enter element %d:",i+1);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&x[i]);
	}
	printf("\n Enter the element you want to search:");
	scanf("%d",&toSearch);
	
found = 0; 
    
    for(i=0; i<n; i++)
    {
        /* 
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(x[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}
