#include <stdio.h>
#include <string.h>
void main()
{
    FILE* file=NULL;
    // file=fopen("testfile.txt","r");
    file=fopen("testfile.txt","r");
    char c;
    int f=0;
    // while((c=fgetc(file))!=EOF)
    // {
    //     f++;
    // //  c=fgetc(file);
    // printf("%c",c);
    // }
    // printf("\nEnter the string to append in the file:");
    // char ch[10];
    // gets(ch);
    // fputs(ch,file);
    // char chr[1000];
    // char chr[25];
    // fgets(chr,26,file);
    // printf("\nThe file after appending the above string is:%s",chr);
    // fputs("123456789 11121315151617128",file);
    // char ch2[52];
    // fgets(ch2,52,file);
    // printf("\nThe file after appending the above string is:%s",ch2);
    char string[10];
    fscanf(file,"%s",string);
    printf("\n%s",string);
     fscanf(file,"%s",string);
    printf("\n%s",string);
     fscanf(file,"%s",string);
    printf("\n%s",string);
    fscanf(file,"%s",string);
    printf("\n%s",string);
    int i=0,cr=0;
    while(string[i]!=NULL)
    {
        cr++;
        i++;
    }
    printf("\nthe length of the string is:%d",cr);
    fclose(file);
}