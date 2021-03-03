#include <stdio.h>
void main()
{
    printf("Enter the no:");
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        printf("\nThe factors of the no. are:");
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                if (i == num)
                    printf("%d", i);
                else
                    printf("%d ,", i);
            }
        }
    }
    else
    {
        printf("Invalid input!");
    }
}