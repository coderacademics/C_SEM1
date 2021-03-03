#include <stdio.h>
#include <string.h>
void showAddress(char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        printf("\nThe address of %c is %u",str[i],&(str[i]));
    }
}
void main()
{
    printf("Enter the string:");
    char str[1000];
    gets(str);
    char* str_p=str;
    
    showAddress(str_p);
}
