
//Check whether a string entered is a palindrome


#include <stdio.h>
#include <string.h>
void main()
{
    int size,i,j,flag=1;
    printf("Enter the size of the string: ");
    scanf("%d",&size);
    char str[size],temp;
    printf("Enter the string:\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0,j=size-1;i<size/2,j>=size/2;i++,j--)
    {
        if(str[i]==str[j])
        continue;
        else
        flag=0;
    }
    if(flag==1)
    {
        printf("The string is a palindrome.\n");
    }
    else if(flag==0)
    {
        printf("The string is not a palindrome.");
    }
}