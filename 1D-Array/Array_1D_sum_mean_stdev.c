/*Find the following for an integer array
     - Sum of the elements
     - Average of the elements
     - Standard deviation of the elements
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int i, arrsize;
    float avg,sum=0,diff_square_sum=0,stdev;
    printf("Enter the array size: ");
    scanf("%d",&arrsize);
    int arr[arrsize];
    printf("Enter array elements: ");
    for(i=0;i<arrsize;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg = sum/arrsize;
    for(i=0;i<arrsize;i++)
    {
        diff_square_sum+=pow((arr[i]-avg),2);
    }
    stdev = sqrt(diff_square_sum/arrsize);
    printf("Sum of the array is:  %f\n",sum);
    printf("Average of the array is: %f\n",avg);
    printf("Standard Deviation is: %f",stdev);
}