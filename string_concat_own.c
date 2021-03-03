#include <stdio.h>
#include <string.h>
#include <math.h>
int length(char str[])
{
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    // printf("\nThe length of the string \" %s \" is: %d" ,str,l);
    return l;
}
char* concater(char str1[],char str2[],int l1,int l2)
{
    
    char* str3;

    // printf("\n");
    for(int i=0;i<l1;i++)
    {
        str3[i]=str1[i];
        //    printf("%c",str3[i]);
    }
    for(int i=0;i<l2;i++)
    {
        str3[i+l1]=str2[i];
        // printf("%c",str3[i+l1]);
    }
    char* strct =str3;
    return strct;
    return str3;
}
void main()
{
    char str1[99999];
    printf("Enter the first string :");
    // scanf("%s",str);
    gets(str1);

    int len1 = length(str1);
    int j1 = len1 - 1;
    char str2[99999];
    printf("Enter the  second string:");
    // scanf("%s",str);
    gets(str2);

    int len2 = length(str2);
    int j2 = len2 - 1;
    char *str3=concater(str1,str2,len1,len2);
    
    printf("\nThe first string entered by you is : \"%s\"", str1);
    printf("\nThe second string entered by you is : \"%s\"", str2);
    printf("\nThe array after concatenation is:");
    for(int i=0;str3[i]!='\0';i++)
    {
        printf("%c",str3[i]);
    }
}