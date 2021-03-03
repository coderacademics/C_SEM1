#include <stdio.h>
void main()
{
    printf("Enter the first angle of the triangle:");
    float a;
    scanf("%f", &a);
    printf("\nEnter the second angle of the  triangle :");
    float b;
    scanf("%f", &b);
    printf("\nEnter the third angle of the triangle:");
    float c;
    scanf("%f", &c);
    int i = 1;
    while (i > 0)
    {
        if (a > 0 && b > 0 && c > 0)
        {
            if (a + b + c == 180)
                printf("\nTriangle is possible!");
            else
                printf("\nTriangle is not possible!");
            break;
        }
        else
        {
            printf("\nIvalid input ! , enter again:");
            printf("Enter the first angle of the triangle:");

            scanf("%f", &a);
            printf("\nEnter the second angle of the  triangle :");

            scanf("%f", &b);
            printf("\nEnter the third angle of the triangle:");

            scanf("%f", &c);
        }

        i++;
    }
}