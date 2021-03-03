#include<stdio.h>
#include<math.h>
void bin_to_deci()
{
    int i,digit;    long deci=0,bin;
    printf("Enter a Binary number : ");
    scanf("%d",&bin);
    if(bin>=0)
    {
    for(i=0;bin!=0;i++){
        digit=bin%10;   bin/=10;
        deci=deci+digit*pow(2,i);
    }
    printf("Decimal equivalent = %d",deci);
    }
    else printf("Invalid input");
}
void deci_to_bin()
{
    int i,j,digit,deci;
    long bin=0;
    printf("Enter a decimal number: ");
    scanf("%d",&deci);
    if(deci>=0)
    {
        for(i=0;deci>0;i++){
            digit=deci%2;
            bin=bin*10+digit;
            deci/=2;
        }
        printf("Binary equivalent = %d",bin);
      
    }
    else
        printf("Invalid input.");
}
void main()
{
    int op1,op2;
   
    printf("1.Binary to Decimal\n2.Decimal to Binary\nChoose the operation you want to perform: ");
    scanf("%d",&op1);
    switch(op1)
    {
    case 1:
        bin_to_deci();
        break;
    case 2:
        deci_to_bin();
        break;
    default:
        printf("Invalid input.");
        break;
    }
   
        
    

}
