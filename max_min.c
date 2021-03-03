#include <stdio.h>
#include<math.h>
void main()
{
    printf("\nEnter the length of the array:");
    int len;
    scanf("%d",&len);
    int j=1;
    while(j>0)
    {
        if(len>0)
        {
            j=-1;
            break;
        }
        else    
            {
                printf("\nInvalid input ! , enter again :");
                scanf("%d",&len);
                j++;
            }
    }

    if(len<=0)
        printf("Invalid input enter again:");
    printf("\nEnter the array elements:");
    int num[len];
    int temp=0;
    for(int i=0;i<len;i++)
    {
        scanf("%d",&temp);
        num[i]=temp;
    }
    int max=num[0],min=num[0];
    for(int i=1;i<len;i++)
    {
        if(num[i]>max)
            max=num[i];
        if(num[i]<min)
            min=num[i];
    }
    printf("\nThe maximum element of the array is: %d",max);
    printf("\nThe minimum element of the array is: %d",min);
}