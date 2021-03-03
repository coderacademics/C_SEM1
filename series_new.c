#include<stdio.h>
#include<math.h>
void main()
{
    printf("Enter the no. of terms :");
    int n=0;
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    int x=0;
    scanf("%d",&x);
    if(n<=0)
    {
        while(n<=0)
        {
            if(n<=0)
            {
                printf("\nYou have entered a no. which is less than the 0.PLEASE ENTER AGAIN:");
                scanf("%d",&n);
            }
        }
    }
    long s=0;
    int j=1;
    for (int i =1;i<=n; i++)
    {
        if(i%2==0)
            s=s-pow(x,j);
        else
        {
            s=s+pow(x,j);
        }
        j+=2;
    }
    printf("\nThe sum of the series is :%d",s);

}