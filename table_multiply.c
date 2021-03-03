#include<stdio.h>
void main()
{
    int n=0;
    printf("Enter a no to print the multiplication table:");
    scanf("\n%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n  %d  *  %d   =  %d",i,n,(i*n));
    }
    
}