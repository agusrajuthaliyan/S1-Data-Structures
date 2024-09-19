#include <stdio.h>

void main()
{
    int num,n ,rem ,rev =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    n = num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("%d reversed is: %d",n,rev);
}