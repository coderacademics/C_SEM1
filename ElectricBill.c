#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter your  consumerID:");
    long a;
    scanf("%d", &a);

    printf("\nEnter your name:");
    char name[30];
    scanf("%s", &name);
    printf("\nEnter the no. of units consumed :");
    int unit;
    scanf("%d", &unit);
    int i = 1;
    while (i > 0)
    {
        if (unit > 0)
        {
            float amount = 0.0;
            if (unit <= 199)
            {
                amount = (double)(1.2 * unit);
            }
            else if (unit >= 200 && unit < 400)
            {
                amount = 1.5 * unit;
            }
            else if (unit >= 400 && unit < 600)

            {
                amount = 1.8 * unit;
            }
            else
            {
                amount = 2.0 * unit;
            }

            if (amount < 100)
            {
                amount = 100;
            }
            if (amount > 400)
            {
                amount += 0.15 * amount;
            }

            printf("The total amount of the customer is:Rs. %0.4f", amount);
            break;
        }
        else
        {
            printf("\nInvalid input !, enter again the no. of units: ");
            scanf("%d", &unit);
        }
        i++;
    }
}
