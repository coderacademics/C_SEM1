#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2, i, j, flag, temp, count = 0;
    printf("Enter the lower limit:");
    scanf("%d", &num1);
    printf("Enter the upper limit:");
    scanf("%d", &num2);
    if (num1 < 0 || num2 < 0 || num2 < num1)
    {
        printf("Invalid input!");
        int i = 1;
        while (i > 0)
        {
            printf("Enter the lower limit:");
            scanf("%d", &num1);
            printf("Enter the upper limit:");
            scanf("%d", &num2);
            if (num1 > 0 && num2 > 0 && num2 > num1)
                break;
        }
    }

    if (num2 < 2)

    {
        printf("There are no primes upto %d\n", num2);
    }

    printf("Prime numbers are \n");

    temp = num1;

    if (num1 % 2 == 0)

    {

        num1++;
    }

    for (i = num1; i <= num2; i = i + 2)

    {

        flag = 0;

        for (j = 2; j <= i / 2; j++)

        {

            if ((i % j) == 0)

            {

                flag = 1;

                break;
            }
        }

        if (flag == 0)

        {

            printf("  %d ", i);

            count++;
        }
    }
}