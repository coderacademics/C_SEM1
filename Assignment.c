#include <stdio.h>
#include <string.h>
void showAddress(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("\nThe address of %c is %u", str[i], &(str[i]));
    }
}
int length(char str[])
{
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    return l;
}
char *concater(char *s1, char *s2, int l1, int l2)
{
    char s3[10000];
    int i = 0;
    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        s3[(i + l1)] = s2[i];
        i++;
    }
    char *str3_p = s3;
    return str3_p;
}
void vowel_counter(char *str)
{
    printf("\nThe no. of vowels in the string is:");
    int c = 0;
    int s = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            c++;
        if (str[i] == ' ')
            s++;
    }
    printf("%d", c);
    // printf("The no. of spaces in the string is: %d", s);
}
void reverser(char str[])
{

    printf("\nThe string entered by you is : \"%s\"", str);
    int len = length(str);
    int j = len - 1;
    char c;
    for (int i = 0; i < (len / 2); i++)
    {
        if (str[i] != str[j])
        {
            c = str[j];
            str[j] = str[i];
            str[i] = c;
        }
        j--;
    }
    printf("\nThe string after getting reversed is: \"%s\"", str);
}
void main(int argc, char *argv[])
{
    int con = 0;
    if (strcmp(argv[1], "1") == 0)
        con = 1;
    else if (strcmp(argv[1], "2") == 0)
        con = 2;
    else if (strcmp(argv[1], "3") == 0)
        con = 3;
    else if (strcmp(argv[1], "4") == 0)
        con = 4;
    else if (strcmp(argv[1], "5") == 0)
        con = 5;
    else if (strcmp(argv[1], "6") == 0)
        con = 6;
    else
        con = -1;
    switch (con)
    {
    case 1:
    {
        printf("Enter the string :");
        char str[1000];
        gets(str);
        showAddress(str);
        break;
    }
    case 2:
    {
        printf("Enter the first string:");
        char str1[1000];
        gets(str1);
        printf("\nEnter the second string :");
        char str2[1000];
        gets(str2);
        int l1 = length(str1);
        int l2 = length(str2);
        char *str1_p = str1;
        char *str2_p = str2;
        printf("\nThe concatenated string is:");
        char *str3 = concater(str1_p, str2_p, l1, l2);
        for (int i = 0; str3[i] != '\0'; i++)
        {
            printf("%c", str3[i]);
        }
        break;
    }
    case 3:
    {
        printf("Enter the first string:");
        char str1[1000];
        gets(str1);
        printf("\nEnter the second string :");
        char str2[1000];
        gets(str2);
        char str3[5000];
        strcat(str1, str2);
        printf("\nThe concatenated string is %s:", str1);
        break;
    }
    case 4:
    {
        printf("Enter the first string:");
        char str1[1000];
        gets(str1);
        printf("\nEnter the second string :");
        char str2[1000];
        gets(str2);
        if (strcmp(str1, str2) == 0)
        {
            printf("\nBoth the strings are equal.");
        }
        else if (strcmp(str1, str2) > 0)
        {
            printf("\nThe first string is greater than the second one.");
        }
        else
        {
            printf("\nThe second string is greater than the first one.");
        }
        break;
    }
    case 5:
    {
        printf("\nEnter the string to calculate the no. of vowels :");
        char str1[1000];
        gets(str1);
        vowel_counter(str1);
        break;
    }
    case 6:
    {
        char str[99999];
        printf("Enter the string you want to reverse:");

        gets(str);
        reverser(str);
        break;
    }
    default:
        printf("Enter again!");
    }
}
