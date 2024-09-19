//max of two pointers
#include<stdio.h>
void main()
{
    int  a,b,*ptr1,*ptr2,sum=0;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
   if (ptr1>ptr2)
     printf("Maximum number is %d",*ptr1);
   else
     printf("Maximum number is %d",*ptr2); 
}