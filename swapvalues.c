#include <stdio.h>
int swaper(int* a,int* b)
{
    int t1=*a;
    int t2=*b;
    *a=t1+t2;
    if(t1>t2)
        {
            *b=t1-t2;
        }
    else
    {
        *b=t2-t1;
    }
    
}
void main()
{
    printf("Enter the first value :");
    int a;
    scanf("%d",&a);
    printf("Enter the second value:");
    int b;
    // a=20;
    // b=10;
    scanf("%d",&b);
    swaper(&a,&b);
    printf("\n");
    printf("The addition of the numbers is: %d\n",a);
      printf("The substraction of the numbers is: %d\n",b);

    
}