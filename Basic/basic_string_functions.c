#include <stdio.h>
#include <string.h> 
int main() 
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    printf("Length of str1: %lu\n", strlen(str1));
    strcpy(str3, str1);
    printf("str3 after strcpy(str3, str1): %s\n", str3);
    strcat(str1, " "); 
    strcat(str1, str2);
    printf("str1 after strcat(str1, str2): %s\n", str1);
    if (strcmp(str1, str2) == 0) 
    {
        printf("str1 and str2 are equal\n");
    } 
    else 
    {
        printf("str1 and str2 are not equal\n");
    }
    char *ptr = strchr(str1, 'o');
    printf("First 'o' in str1 is at position: %ld\n", ptr - str1 + 1);
    ptr = strstr(str1, "World");
    printf("Substring 'World' found in str1 at position: %ld\n", ptr - str1 + 1);
    return 0;
}
