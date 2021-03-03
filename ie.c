#include <stdio.h>
void main()
{
    printf("Enter the no:");
    int num;
    scanf("%d",&num);
    
    for(int i=1;i>0;i++)
    {
        if(num%2==0)
        {
            printf("\nIt is a even no.");
            i=-1;
        }
        else{
            printf("\nEnter the no. again:");
            scanf("%d",&num);
        }
        

    }
}