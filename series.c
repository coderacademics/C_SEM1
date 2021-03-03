#include <stdio.h>
#include <math.h>
void main()
{
    printf("Enter the no. of terms :");
    int n = 0;
    scanf("%d", &n);

    if (n <= 0)
    {
        while (n <= 0)
        {
            if (n <= 0)
            {
                printf("\nYou have entered a no. which is less than the 0.PLEASE ENTER AGAIN:");
                scanf("%d", &n);
            }
        }
    }
    double s = 1;
    int j = 1;
    for (double i = 2; i <= n; i++)
    {
        s = s + (1 / i);
    }
    printf("\nThe sum of the series is :%f", s);
}