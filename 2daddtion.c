#include <stdio.h>
#include<math.h>
void main()
{
    printf("Enter the no. of rows for the arrays");
    int a;
    scanf("%d",&a);
    printf("\n");
    printf("Enter the no. of coloumns of the arrays:");
    int b;
    scanf("%d",&b);
    int arr1[a][b];
    int arr2[a][b];
    printf("\nEnter the elements of the first array:");
    int temp=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&temp);
            arr1[i][j]=temp;
        }
    }
    printf("\nEnter the elements of the second array:");
     temp=0;
     int arr3[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&temp);
            arr2[i][j]=temp;
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    
    printf("\nThe result matrix is :");
    printf("\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
}