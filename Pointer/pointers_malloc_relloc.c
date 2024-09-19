// Read a character array 
//   a. Using 
//   b. Using malloc
//   c. the memory allocation using realloc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
   
    char *array;
    int initial_size,extended_size;
    printf("Enter the initial size of the character array: ");
    scanf("%d",&initial_size);
    array=(char *)calloc(initial_size,sizeof(char));
    if(array==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter a string with upto %d characters: ",initial_size-1);
    scanf("%s",array);
    printf("you entered: %s\n",array);
    printf("Enter the new size of the character array: ");
    scanf("%d",&extended_size);
    array=(char*)realloc(array,extended_size*sizeof(char));
    if(array==NULL){ printf("Memory reallocation failed!\n");
        return 1;
    }    
    printf("Enter a new string with upto %d characters: ",extended_size-1);
    scanf("%s",array);
    printf("You entered: %s\n",array);
    free(array);
}
