#include <stdio.h>
void main()
{
    printf("Enter the sides of the triangle:");
    int a;
    scanf("%d", &a);
    printf("\nEnter the next side of the triangle:");
    int b;
    scanf("%d", &b);
    printf("Enter the last side of the triangle:");
    int c;
    scanf("%d", &c);
    int i=1;
    while (i > 0)
    {

        if (a > 0 && b > 0 && c > 0)
        {

            printf("\n");
            if (a == b && b == c)
                printf("The triangle is equilateral.");

            if ((a == b && b != c) || (b == c && b != a) || (c == a && c != a))
                printf("The triangle is isoceles!");
            if (a != c && c != b && b != a)
                printf("The triangle is scalene");
           break;
        }
        else
        {
            printf("Please enter a valid length again!");
            printf("Enter the sides of the triangle:");

            scanf("%d", &a);

            printf("\nEnter the next side of the triangle:");

            scanf("%d", &b);

            printf("Enter the last side of the triangle:");

            scanf("%d", &c);
        }
        i++;
    }
}