#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_leap(int y1)
{
    if(y1%4==0)
        return true;
    return false;
}
void main()
{
    printf("Enter the first date in dd/mm/yyyy format:");
    char d1[10];
    gets(d1);
    int dd1 = ((int)d1[0] - 48) * 10 + ((int)d1[1] - 48);
    int m1 = ((int)d1[3] - 48) * 10 + ((int)d1[4] - 48);
    int y1 = ((int)d1[6] - 48) * 1000 + ((int)d1[7] - 48) * 100 + ((int)d1[8] - 48) * 10 + ((int)d1[9] - 48);
    // printf("\n%d",y1);
    // printf("\n%d",m1);
    // printf("\n%d",a);

    printf("\nEnter the second date in dd/mm/yyyy format:");
    char d2[10];
    gets(d2);
    int dd2 = ((int)d2[0] - 48) * 10 + ((int)d2[1] - 48);
    int m2 = ((int)d2[3] - 48) * 10 + ((int)d2[4] - 48);
    int y2 = ((int)d2[6] - 48) * 1000 + ((int)d2[7] - 48) * 100 + ((int)d2[8] - 48) * 10 + ((int)d2[9] - 48);
    //    printf("\n%d",m2);
    // printf("\n%d",dd2);
    // printf("\n%d", y2);
    int c = 0;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months_l[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (y1 == y2)
    {
        if (m1 == m2)
        {
            c = dd2 - dd1+1;
        }
        else
        {
            c=0;
            if (is_leap(y1) == true)
            {
                c = c + (months_l[m1 - 1] - dd1)+1;
                // printf("\n%d",c);
                for (int i = m1+1; i < m2; i++)
                {
                    c += months_l[i-1];
                }
                // printf("\n%d",c);
              
            }
            else
            {

                c = c + (months[m1 - 1] - dd1)+1;
                for (int i = m1+1; i < m2; i++)
                {
                    c += months[i-1];
                }
            }
              c=c+dd2-1;
        }
    }
    else{
        c=0;
       int j=y1+1;
       for(j=j;j<y2;j++)
       {
           if(is_leap(j)==true)
            c+=366;
            else
            c+=365;
       }
    //    printf("\n%d",c);
        if(is_leap(y1)==true)
        {
              c+=months_l[m1-1]-dd1;
              j=m1+1;
              for(j=j;j<=12;j++)
                c+=months_l[j-1];
        }
          
        else
        {
             c+=months[m1-1]-dd1;
             j=m1+1;
              for(j=j;j<=12;j++)
                c+=months[j-1];
        }

        //  printf("\n%d",c);  
        
        if(is_leap(y2)==true)
        {
             c+=dd2;
             j=m2;
             for(int i=0;i<j-1;i++)
                c+=months_l[i];
        }
           
        else
        {
            c+=dd2;
            j=m2;
             for(int i=0;i<j-1;i++)
                c+=months[i];
        }
            
        //  printf("\n%d",c);  
        
    }

    printf("\nThe no. of days between the dates are:%d",c);
}
