#include <stdio.h>

void main()
{
    int num,n ,rem ,sum =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    while(num!=0)
    {
        rem = num%10;
        sum+=rem;
        num = num/10;
    }
    printf("The sum of digits in %d  is: %d",n,sum);
}