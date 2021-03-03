#include <stdio.h>
void main()
{
    int a=87;
    int* ptra=&a;
    printf("The value of a is%d \n",a);
    printf("The address of a is%x \n",&a);
    printf("The value of a is%d \n", *ptra);
    printf("The address of a is%x \n", ptra);
}