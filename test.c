#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void checker(int num)
{
    double n=digitcounter(num);
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
    printf("Enter the no. to be checked:");
    int num=0;
    scanf("%d",&num);
    checker(num);
    // double n=4,i=5;
    //  double temp=28+(pow(5,n));
    // printf("\n%f ",temp);
    // int t=pow(5,3);
    // printf("%d ",t);
}