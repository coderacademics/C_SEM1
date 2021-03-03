#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void main()
{
    printf("Enter 1 to print the binary no. in 8 bit form.");
    printf("\nEnter 2 to print the binary no. in 16 bits form.");
    int choice;
    int bits;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
         bits=8;
        break;
    }
    case 2:
    {
         bits=16;
        break;
    }
    default:printf("\nInvalid input!");
        
    }

    printf("\nEnter the no. to be converted to binary:");
    int num;
    int sign=0;
    scanf("%d",&num);
    if(num<0)
        sign=-1;
    else if(num>0)
        sign=1;
    else
        sign=0;
    char
}