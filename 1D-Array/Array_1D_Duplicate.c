#include <stdio.h>

int main()
{
    int size, a[30],i,j;
    printf("Enter the size of the array");
    scanf("%d",&size);
    
    printf("Enter the elements in the array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
          if(a[i]==a[j]){
              printf("\nThe duplicated element is %d",a[j]);
          }  
        }
    }    return 0;
}