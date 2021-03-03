#include <stdio.h>
void sum_product(int num)
{   int s=0;
    float f=1;
    for(int i=num;i>0;i=i/10)
    {
        s+=(i%10);
        f=f*(i%10);
    }
    printf("\nThe sum of all the digits of the no. %d is %d.\n",num,s);
    printf("The product of all the digits of the no. %d is %0.0f.",num,f);
}
void main()
{   int num;
    printf("Enter a no. below:");
    scanf("%d",&num);
    if(num<0)
    {
        num=num*-1;
        sum_product(num);
    }
    else if(num >=0&&num<=9)
    {
      printf("\nThe sum of all the digits of the no. %d is %d.\n",num,num);
    printf("The product of all the digits of the no. %d is %d.",num,num); 
    }
    else{
         sum_product(num);
    }
}