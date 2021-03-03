#include <stdio.h>
#include <math.h>

void fibonacci(int a, int b, int n)
{
    if (n != 0)
    {
        printf(" %d ", (a + b));
        fibonacci(b, (a + b), n - 1);
    }
}
void main()
{
    printf("\nEnter the no. of the terms:");
    int n;
    scanf("%d", &n);
    while (n < 0)
    {
        if (n < 0)
        {

            printf("Invalid input!, please enter again:");
            scanf("%d", &n);
        }
    }
    printf("\nThe fibonacci series is:");
    if (n == 1)
    {
        printf("0");
    }
    if (n == 2)
    {
        printf(" 0 1 ");
    }
    else
    {
        printf("0 1");
        fibonacci(0, 1, n - 2);
    }
   
}