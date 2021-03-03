#include <stdio.h>
void main()
{
    int a1;
    printf("\nEnter no. of rows:");
    scanf("%d", &a1);
    int b1;
    printf("\nEnter the no. of coloumns:");
    scanf("%d", &b1);

    int m1[a1][b1];
   
    printf("\nEnter the elements of the first matrix:");
    int temp = 0;
    for (int i = 0; i < a1; i++)
    {
        temp = 0;
        for (int j = 0; j < b1; j++)
        {
            scanf("%d", &temp);
            m1[i][j] = temp;
        }
    }

    int a2;
    printf("\nEnter the no. of rows:");
    scanf("%d", &a2);
    int b2;
    printf("\nEnter the no. of coloumns:");
    scanf("%d", &b2);
    int m2[a2][b2];
    printf("\nEnter the elements of the second matrix:");
    // int temp=0;
    for (int i = 0; i < a2; i++)
    {
        temp = 0;
        for (int j = 0; j < b2; j++)
        {
            scanf("%d", &temp);
            m2[i][j] = temp;
        }
    }

    if (b1 == a2)
    {
        printf("\nThe first matrix:");
        printf("\n");
        for (int ia = 0; ia < a1; ia++)
        {
            for (int ja = 0; ja < b1; ja++)
            {

                printf("%d ", m1[ia][ja]);
            }
            printf("\n");
        }
        printf("\nThe second matrix:");
        printf("\n");
        for (int ia = 0; ia < a2; ia++)
        {
            for (int ja = 0; ja < b2; ja++)
            {

                printf("%d ", m2[ia][ja]);
            }
            printf("\n");
        }
        printf("\nThe result matrix is:\n");
        int m3[a1][b2];
        int s = 0;
        for (int i = 0; i < a1; i++)
        {
            for (int j = 0; j < b2; j++)
            {
                for (int k = 0; k < b1; k++)
                {
                    s = s + (m1[i][k] * m2[k][j]);
                }
                m3[i][j] = s;
                // printf("%d ",s);
                s = 0;
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong input format for the matrices!");
    }
}