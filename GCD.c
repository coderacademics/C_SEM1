#include <stdio.h>
#include <math.h>
void main()
{
    printf("Enter the first no.");
    int n1;
    scanf("%d",&n1);
    printf("Enter the second no.");
    int n2;
    scanf("%d",&n2);
    int n=n1<n2?n1:n2;
    int gcd=0;
    for(int i=1;i<=n;i++)
    {
        if(n1%i==0&&n2%i==0&&i>gcd)
            gcd=i;

    }
    printf("\nThe gcd of %d and %d is : %d", n1,n2,gcd);
    
}