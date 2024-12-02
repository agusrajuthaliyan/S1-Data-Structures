#include <stdio.h>
#define MAX 10
char stack[MAX];
int TOP=-1;
void push(char ch)
{
    if (TOP==MAX-1)
    {
        printf("stack is full");
    }
    else 
    {
        TOP++;
        stack[TOP]=ch;
    }
}

void pop()
{
    if (TOP==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%c",stack[TOP]);
        TOP--;
    }
}

void main()
{
    char str[MAX];
    int i;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    while(TOP!=-1)
    {
        pop();
    }
}
