#include <stdio.h>
#include <string.h>
void main()
{
    char c[10]={'S','a','i','k','a','t'};
    printf("The value of string is:%s",c);
    char str[100];
    printf("\nEnter the value of string:");
    gets(str);
    printf("\nThe string entered by you is:");
    puts(str);

    char c1[100]="Saikat ";
    char c2[100]="Mohanta";
    printf("\n",strcat(c1,c2));
    printf("Enter the first string to compare:\n");
    scanf("%s",&c1);
    printf("Enter the next string to compare:\n");
    scanf("%s",&c2);

    int r=strcmp(c1,c2);
    if(r==0)
        printf("Both the string are equal.");
    else
        printf("The strings are not equal.");

    printf("The length of the first string entered by the user is:%d\n",strlen(c1));
    printf("The length of the second string entered by the user is:%d\n",strlen(c2));
    strcpy(c1,c2);
    printf("%s",c1);
    char s1[15]="abcd";
    char s2[15]="efghijklmn";
    printf("\n%s",strncat(s1,s2,6));
}
