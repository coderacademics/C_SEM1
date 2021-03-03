#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f = NULL;
    f = fopen("testfile.txt", "r");
    char c;
    char str[100];
    char st[100];
    int i=0,ct=0;
    int max=0;
    int b=0;
    fgets(str,100,f);
    int len=strlen(str);
    while(i<len)
    {
        b=i;
        if(str[i]!=' ')
        {
            if(c>max)
            {
                max=c;
                st=str.substr(b,i);
            }
        }
    }
    fclose(f);
}