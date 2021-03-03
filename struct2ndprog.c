#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    char address[40];
    long phno;
};
void main()
{
    struct Student s[3];
    printf("\nEnter the details of the students:");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the record of the %d student", (i + 1));

        fflush(stdin);
        printf("Enter the name of the student:");
        gets(s[i].name);

        fflush(stdin);
        printf("Enter the phno of the student:");
        scanf("%d", &s[i].phno);
        fflush(stdin);
        printf("Enter the address of the student:");
        gets(s[i].address);
        fflush(stdin);
    }
    for (int j = 0; j < 3; j++)
    {
        fflush(stdout);
       printf("\nName:%s",s[j].name);
       fflush(stdout);
       printf("\nAddress:%s",s[j].address);
       fflush(stdout);
       printf("\nMobile No.:%d",s[j].phno);
        fflush(stdout);
       printf("\n");
    }
}
