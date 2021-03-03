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
char* concater(char* s1,char* s2, int l1,int l2)
{
    char s3[10000];
    int i=0;
    while (s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        s3[(i+l1)]=s2[i];
        i++;
    }
    char* str3_p=s3;
    return str3_p;

    
    
}
void main()
{
    printf("\nEnter the first string:");
    char str1[1000];
    gets(str1);
    printf("Enter the second string:");
    char str2[1000];
    gets(str2);
    int l1=length(str1);
    int l2=length(str2);
    char* str1_p=str1;
    char* str2_p=str2;
    printf("\nThe concatenated string is:");
    char* str3=concater(str1_p,str2_p, l1, l2);
    for(int i=0;str3[i]!='\0';i++)
    {
        printf("%c",str3[i]);
    }

}
