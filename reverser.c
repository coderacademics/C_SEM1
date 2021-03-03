#include <stdio.h>

void main()
{
    int i = 1;
    printf("Enter the no. to be reversed :");
    int num;
    scanf("%d", &num);
    while (num < 0)
    {
        if (num < 0)
        {
            printf("Wrong input!, ENTER AGAIN:");
            scanf("%d", &num);
        }
    }
    int n = 0;
    for (int i = num; i > 0; i = i / 10)
    {
        n = n * 10 + (i % 10);
    }
    printf("The reverse of the original no. %d is: %d", num, n);
}