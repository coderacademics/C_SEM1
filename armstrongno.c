#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void checker(int num)
{
  double n=(double)(digitcounter(num));
    double n1=0;
    double temp=0;
    int i=num;
    double t=0;
    while(i>0)
    {       t=i%10;
           temp=pow(t,n);
           n1=n1+temp;
            i=i/10;
     }
     if(n1==num)
       printf("%0.0f ,",n1);
}
int digitcounter( int num)
{
    int c=0;
    for(int i=num;i>0;i=i/10)
    {
        c++;

    }
  
    return c;
}
void main()
{
  
    int low;
    printf("Enter the lower limit:");
    scanf("%d",&low);
    int up;
    printf("\n");
    printf("Enter the upper limit:");
    scanf("%d",&up);

    
    if(up<low)
    {
        printf("\nSince the upper limit is less than the lower limit , taking the upper limit as the lower limit and vice versa.");
        int temp=up;
        up=low;
        low=temp;
    }
    printf("\n The armstrong no. from %d to %d are:",low,up);
    for(int i=low;i<=up;i++)
    {
        checker(i);
    }

}