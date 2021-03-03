#include <stdio.h>
#include <string.h>
struct Student
{
    int Rollno ;
    char stream[50];
    int year;
    char name[50];



};
struct Student s1,s2,s3;
void main()
{
    // printf("Enter the name of the first student:\n");
    // scanf("%s",s1.name);
    // printf("Enter the Roll no. of the student\n");
    // scanf("%d",s1.Rollno);
    // printf("Enter the year of admission of the student:\n");
    // scanf("%d",s1.year);
    // printf("Enter the stream of student:\n");
    // scanf("%s",s1.stream);
    //  printf("Enter the name of the second student:\n");
    // scanf("%s",s2.name);
    // printf("Enter the Roll no. of the student\n");
    // scanf("%d",s2.Rollno);
    // printf("Enter the year of admission of the student\n");
    // scanf("%d",s2.year);
    // printf("Enter the stream of student:\n");
    // scanf("%s",s2.stream); 
    // printf("Enter the name of the third student:\n");
    // scanf("%s",s3.name);
    // printf("Enter the Roll no. of the student\n");
    // scanf("%d",s3.Rollno);
    // printf("Enter the year of admission of the student:\n");
    // scanf("%d",s3.year);
    // printf("Enter the stream of student:\n");
    // scanf("%s",s3.stream);
    // s1.name=";
    // s1.Rollno=849;
    // s1.year=2020;
    // s1.stream="computerScience";
    s1.Rollno=846;
    s1.year=2020;
    printf("Enter the name of the student:\n");
    char c[25];
    scanf("%s",c);
    strcpy(s1.name,c);
    
    // printf("Name\tRollno.\tstream\tyear of Admission\n");
    // printf("The details of the student is:%s\t%d\t%s\t%s\t%d\n",s1.name,s1.Rollno,s1.stream,s1.year);
    // printf("The roll no of the student is:%d",s1.Rollno);
    printf("Name\tRollno\tyear\t\t\n");
    printf("%s\t%d\t%d",s1.name,s1.Rollno,s1.year);
    
    
   

}