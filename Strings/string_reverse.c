/*Read a String and display it in the reverse order using
  a. Just print it in the reverse order
  b. Reverse the string in the same array itself 
*/


#include <stdio.h>
#include <string.h>
void main()
{
    int size,i,j;
    printf("Enter the size of the string: ");
    scanf("%d",&size);
    char str[size],temp;
    printf("Enter the string:\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",&str[i]);
    }
    printf("a. Simply printing the string in reverse.\n");
    for(i=size-1;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
    printf("\nb. reversing the string in the same array.\n");
    for(i=0,j=size-1;i<size/2,j>=size/2;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%c ",str[i]);
    }
}
