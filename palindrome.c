#include <stdio.h>
#include <stdbool.h>
bool palindrome(int num)
{
    int n = 0;
    bool r;

    for (int i = num; i > 0; i = i / 10)
    {
        n = n * 10 + i % 10;
    }
    if (n == num)

        r = true;

    else
        r = false;
    return r;
}
bool prime(int n)
{
    int f=0;
    bool r1=false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==0)
    r1=true;
    return r1;
}
void main()
{
    printf("Enter the no. to be checked:");
    int i = 0;
    int num;
    scanf("%d", &num);
    if(num<0)
        printf("The no. is neither a prime no. nor an palindromic no.");
    else
    {
        

    bool r=palindrome(num);
    bool r1=prime(num);
    
    if(r==true&&r1==true)
    {
         printf("\n%d is a prime palindromic number.",num);
       
    }
   
    else if(r==true&&r1==false)
    {
    printf("\n%d is a palindromic no. but not a prime no.",num);
    
     

    }
    else if(r1==true&&r==false)
    {
         printf("\n%d is a prime no. but not a palindrome no.",num);
        
    }
   
    else
    {
    printf("\n%d is neither prime nor palindromic no.",num);
    
    }
   
    }

    }
    
