
#include <stdio.h>
void main()
{
    printf("Enter the no:");
    int num;
    scanf("%d", &num);
    while (num < 0)
    {
        if (num < 0)
        {
            printf("\nInvalid input!,Enter again:");
            scanf("%d", &num);
        }
    }

    int f = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            f++;
    }
    if (f == 0)
        printf("%d is a prime no.", num);
    else
    {
        printf("%d is not a prime no.", num);
    }
}