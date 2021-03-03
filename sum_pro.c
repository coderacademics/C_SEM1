#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void main()
{
    for (int i = 1; i > 0; i++)
    {
        int choice = 0;
        printf("\nEnter any no. to continue.\nEnter -1 to exit.");
        scanf("%d", &choice);
        if (choice == -1)
            break;
        else
        {
            printf("\nEnter the no:");
            int num;
            scanf("%d", &num);
            if (num == 0)
            {
                printf("\nThe sum of the digit is: 0");
                printf("\nThe product of the digit is: 0");
            }
            else
            {

                if (num < 0)
                {
                    printf("\nSince the no. entered is negative , changing it to positive automatically.");
                    num = abs(num);
                }

                float s = 0.0;
                float p = 1.0;
                for (int i = num; i > 0; i = i / 10)
                {
                    s = s + (i % 10);
                    p = p * (i % 10);
                }

                printf("\nThe sum of the digits is: %0.0f", s);
                printf("\nThe product of the digits is: %0.0f", p);
            }
        }
    }
}
