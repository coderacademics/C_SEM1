#include <stdio.h>
#include <math.h>
void main()
{
    printf("Enter the length of the array you want to reverse(NOTE:IF YOU ENTER AN ARRAY OF NEGATIVE LENGTH WILL BE AUTOMATICALLY CONVERTED TO POSITIVE):");
    int a;
    scanf("%d", &a);
    a = abs(a);
    if (a == 0)
        printf("The array cannot be zero !");
    else
    {

        int arr[a];
        printf("\nEnter the array elements :");
        int temp = 0;
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &temp);
            arr[i] = temp;
        }

        printf("\nThe reversed array is :");
        int f = 0;
        int l = a - 1;
        temp = 0;
        while (f < l)
        {
            if (arr[f] != arr[l])
            {
                temp = arr[f];
                arr[f] = arr[l];
                arr[l] = temp;
            }
            f++;
            l--;
        }

        printf("  %d", arr[0]);
        for (int i = 1; i < a; i++)
        {
            printf(" ,%d", arr[i]);
        }
    }
}