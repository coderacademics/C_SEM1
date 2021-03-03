#include <stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    char st[100];
    printf("\nEnter the string :");
    scanf("%s",st);
    char str[100];
    printf("\nEnter the second string:");
    scanf("%s",str);
    char strng[200];
    int len=strlen(st);
    int len1=strlen(str);
    printf("\nThe length of the string %s is : %d",st,len);
     printf("\nThe length of the string %s is : %d",str,len1);
     printf("\nThe first string %s in lowercase letter is %s",st,strlwr(st));
     printf("\nThe second string %s in lowercase letter is %s",str,strlwr(str));
     printf("\nThe first string %s in uppercase letter is %s",st,strupr(st));
     printf("\nThe second string %s in uppercase letter is %s",str,strupr(str));

     printf("\nThe concatenated string is: %s",strcat(st,str));
}