#include <stdio.h>
void main()
{
    printf("Enter the no that you want to find the table of:\n");
    int a;
    scanf("%d",&a);
    printf("Enter the no upto which you want to print the table:\n");
    int b;
    scanf("%d",&b);
    if(a>=1&&b>=1)
    {
    printf("The table is as follows:\n");
    for (int i = 0; i <= b; i++)
    {
        printf("%d  *  %d =  %d\n",a,i,(a*i));
    }
    }
    else
    {
        printf("Invalid No! Please run the code again using valid no.s");
    }
    
}