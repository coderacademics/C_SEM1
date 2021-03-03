#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{
    printf("Enter a string :");
    char str[10000];
    gets(str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("\nThe length of the string \" %s \" is: %d" ,str,l);
}