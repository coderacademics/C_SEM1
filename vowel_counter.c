#include <stdio.h>
#include <string.h>
void vowel_counter(char* str)
{
  printf("\nThe no. of vowels in the string is:");
  int c=0;
  int s=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        c++;
        if(str[i]==' ')
            s++;
  }  
    printf("%d",c);
    printf("The no. of spaces in the string is: %d",s);
}
void main()
{
    printf("Enter the string to calculate the no. of vowels:");
    char str[1000];
    gets(str);
    vowel_counter(str);
}