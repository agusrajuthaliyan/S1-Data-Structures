//Read a character array. Search for any vowels in the array; if found print the positions
#include <stdio.h>
void main()
{
    int i,size,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    char arr[size];
    printf("Enter element: \n");
    for(i=0;i<size;i++)
    {
        scanf("%s",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            printf("The vowel is in %d position\n",i+1);
            count+=1;
        }
    }
    printf("Vowel repeats %d times",count);
}