#include <stdio.h>
int main()
{
    int num, sum=0, firstDigit, lastDigit,digit;
    
    printf("Enter any number to find sum of first and last digit:\n ");
    scanf("%d", &num);
    
    /* Find last digit to sum */
    lastDigit = num % 10;
    

    /* Copy num to first digit */
    firstDigit = num;

    /* Find the first digit by dividing num by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;


    /* Find sum of first and last digit*/ 
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
