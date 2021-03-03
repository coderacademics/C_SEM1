#include <stdio.h>
void main()
{   int n2=1;
    int n=0;
    printf("Enter a no. :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n2;k++)
        {
            printf("*");
        }
        printf("\n");
        n2=n2+2;
    }
}