#include <stdio.h>
#include<string.h>
#include<math.h>

int length(char str[])
{
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    // printf("\nThe length of the string \" %s \" is: %d" ,str,l);
    return l;
}
void main()
{
    
    char str[99999];
    printf("Enter the string you want to reverse:");
    // scanf("%s",str);
    gets(str);
    printf("\nThe string entered by you is : \"%s\"",str);
    int len=length(str);
    int j=len-1;
    char c;
    for(int i=0;i<(len/2);i++)
    {
        if(str[i]!=str[j])
        {
            c=str[j];
            str[j]=str[i];
            str[i]=c;
        }
        j--;
    }
    printf("\nThe string after getting reversed is: \"%s\"",str);
    
}
