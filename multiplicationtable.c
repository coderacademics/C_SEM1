#include <stdio.h>
main()
{
    printf("Enter the no. that you want to print the multiplication table of:");
    int a;
    scanf("%d",&a);
    // int b;
    // b=a;
    printf("The multiplication table of %d is as follows:\n", a);
    printf("\n\t%d\t*\t1\t=\t%d",a,(a*1));
    printf("\n\t%d\t*\t2\t=\t%d",a,(a*2));
    printf("\n\t%d\t*\t3\t=\t%d",a,(a*3));
    printf("\n\t%d\t*\t4\t=\t%d",a,(a*4));
    printf("\n\t%d\t*\t5\t=\t%d",a,(a*5));
    printf("\n\t%d\t*\t6\t=\t%d",a,(a*6));
    printf("\n\t%d\t*\t7\t=\t%d",a,(a*7));
    printf("\n\t%d\t*\t8\t=\t%d",a,(a*8));
    printf("\n\t%d\t*\t9\t=\t%d",a,(a*9));
    printf("\n\t%d\t*\t10\t=\t%d",a,(a*10));

}