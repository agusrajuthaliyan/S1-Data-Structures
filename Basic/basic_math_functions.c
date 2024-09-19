#include <stdio.h>
#include <math.h>
 
void main()
{
    float num1,num2;
    printf("Enter two numbers: \n");
    scanf("%f %f",&num1,&num2);
    printf("Square root of %.3f= %.3f\n",num1,sqrt(num1));
    printf("Ceil of %.3f is %.3f\n", num1,ceil(num1));
    printf("floor of %.3f is %.3f\n", num2,floor(num2));
    printf("Power of %.3f^%.3f is %.3f\n",num1,num2,pow(num1,num2));
    


    
}