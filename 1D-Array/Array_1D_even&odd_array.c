/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,even_count=0,odd_count=0,even[20],odd[20],ar[20],i,j=0,k=0;
    printf("enter the size of the array");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
        if(ar[i]%2==0){
            even_count=even_count+1;
        }else{
            odd_count=odd_count+1;
        }
    }
    
    for(i=0;i<size;i++){
        if(ar[i]==0)
        {
            continue;
        }
        else if(ar[i]%2==0)
        {
           even[j]=ar[i]; 
           j++;
        }
        else
        {
            odd[k]=ar[i];
            k++;
        }
    }

    printf("Enter the even array is");
    for(i=0;i<even_count;i++){
        printf("%d",even[i]);
    }
    
    printf("\nEnter the odd array is");
    for(i=0;i<odd_count;i++){
        printf("%d",odd[i]);
    }
    
    return 0;
}