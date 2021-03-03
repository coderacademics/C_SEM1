#include <stdio.h>

int  prime(int num)
{
    int f=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            f++;
    }
    if(f==0)
        return 0;

    return 1;
}
void main()
{
    int r=0;
    printf("The prime no.s less than 100 are: ");
    printf(" 2");
    for (int i = 3; i <100; i++)
    {
       r=prime(i);
       if(r==0)
       printf(", %d",i);
    }
    
}