#include <stdio.h>
#include <string.h>
typedef struct Student{
    int marks;
}stu;
void main()
{
    printf("Enter the no. of students:");
    int no;
    scanf("%d",&no);
    printf("\nEnter the marks obtained by the student:");
    stu s[no];
    int max=0,min=0;
    for(int i=0;i<no;i++)
    {
        
        scanf("%d",&s[i].marks);
        if(i==0)
            min=s[i].marks;
        if(s[i].marks>max)
            max=s[i].marks;
        if(s[i].marks<min&&i!=0)
            min=s[i].marks;
    }
    printf("The minimum marks obtained by the student is: %d",min);
    printf("The maximum marks obtainer by the student is: %d",max);


}