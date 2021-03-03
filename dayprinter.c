#include <stdio.h>
#include <stdio.h>
void main()
{
    printf("Enter the day no to be printed:");
    int a;
    scanf("%d", &a);
    int i = 1;
    while (i > 0)
    {
        if (a >= 1 && a <= 7)
        {
            if (a == 1)
                printf("\nSunday");
            else if (a == 2)
                printf("\nMonday");
            else if (a == 3)
                printf("\nTuesday");
            else if (a == 4)
                printf("\nWednesday");
            else if (a == 5)
                printf("\nThursday");
            else if (a == 6)
                printf("\nFriday");
            else if (a == 7)
                printf("\nSaturday");
            break;
        }

        else
        {
            printf("\nWrong input !!,enter again:");
            printf("Enter the day no to be printed:");
            scanf("%d", &a);
        }
        i++;
    }
}