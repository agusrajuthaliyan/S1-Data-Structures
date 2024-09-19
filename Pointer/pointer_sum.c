#include<stdio.h>
void main()
{
    int  a,b,*ptr1,*ptr2,sum=0;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("the sum of %d and %d is %d",*ptr1,*ptr2,*ptr1+*ptr2);
}