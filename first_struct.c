#include <stdio.h>
#include <string.h>
 
 struct Student{
        char name[50];
        int rollno;
        char phno[10];
    };
void main()
{
   
    struct Student s1;
    char nam[50];
    printf("Enter the details of the student below:");
    printf("\nEnter the name of the student:");
    gets(s1.name);
    printf("Enter the rollno. of the student:");
    // gets(roll);
    scanf("%d",&s1.rollno);
    printf("Enter the phno. of the student:");
    
    scanf("%s",s1.phno);
    printf("\nThe details of the student are:");
    printf("\nName:         %s",s1.name);
    printf("\nRoll no.      %d",s1.rollno);
    printf("\nContact no.   %s",s1.phno);
    

}
