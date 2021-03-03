#include <stdio.h>
#include <math.h>
float area_cal(float rad)
{
    float ar=3.14*rad*rad;
    return ar;
}
float circum_cal(float rad)
{
    
    float cir=2*3.14*rad;
    return cir;
}
void main()
{
    float rad;
    printf("Enter the radius of the circle. (NOTE:If you enter the radius in negative , the compiler takes the absolute value .");
    scanf("%f",&rad);
    if(rad==0)
        printf("\nWrong input!");
    else{
        if(rad<0)
        {
            rad=abs(rad);
        }
        float area=area_cal(rad);
        printf("\n The area of the circle(upto 4 decimal places) is : %0.4f",area);
        float circum=circum_cal(rad);
        printf("\n The circumference of the circel (upto 4 decimal places) is: %0.4f", circum);
    }
}