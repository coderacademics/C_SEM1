#include <stdio.h>
#include <math.h>
double powe(float a,float b)
{
    float result=1;
    if(b<0)
    {
        a=1/a;
        b=-b;
        for(int i=1;i<=b;i++)
        {
            result=result*a;
        }
    }
    else if(b>0)
    {
        for(int i=1;i<=b;i++)
        {
            result=result*a;
        }
    }
    else
    {
        result =1;
    }
    return result;

}
void main()
{
    printf("Enter a no to find the power of:");
    float a;
    scanf("%f",&a);
    printf("\nEnter the power :");
    float b;
    scanf("%f",&b);
    double rs=0.0;
    if(a==0)
        rs=0;
    else
    {
        rs=powe(a,b);
    }
    

    printf("\nThe result is:  %f",rs);
    
}