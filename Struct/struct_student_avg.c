// Write a program to receive the following details of 5 students using structs.
// Roll_No
// Name
// CGPA
// Find out the average CGPA of the class


#include <stdio.h>
struct student 
{
    int roll_no;
    char name[100];
    float CGPA;
}s[5];
int main() 
{
    int i;
    float sum=0.0,avg;
    printf("Enter the details of 5 students:\n");
    for (i=0;i<5;i++) 
    {
        printf("Roll no: ");
        scanf("%d",&s[i].roll_no);
        printf("Name: ");
        scanf("%s",s[i].name); 
        printf("CGPA: ");
        scanf("%f",&s[i].CGPA);
    }
    printf("\nThe details of the 5 students are:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Roll no: %d\n",s[i].roll_no);
        printf("Name: %s\n",s[i].name);
        printf("CGPA: %.2f\n",s[i].CGPA);
        printf("\n");
        sum +=s[i].CGPA;
    }
    avg = sum / 5;
    printf("Average: %.2f\n",avg);
    return 0;
}