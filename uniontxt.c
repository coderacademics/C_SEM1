#include <stdio.h>;
#include <string.h>;
 union Student
    {
        char name[30];
        int id;
        int roll_no;
    };
    union Student s1;
    
void main()
{
   s1.roll_no=7899;
   s1.id=84;
   printf("The id of the student is %d.",s1.id);
   printf("The roll no of the student is %d .",s1.roll_no);
   printf("The name of the student is %s",s1.name);
    
}