#include <stdio.h>

void main()
{
    int num,n, count =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    while(num!=0)
    {
        count+=1;
        num = num/10;
    }
    printf("The count of digits in %d  is: %d",n,count);
}