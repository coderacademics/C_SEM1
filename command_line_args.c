#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ) {

for(int i=0;i<argc;i++)
{
    printf("\n The argument at %d is %s",i,argv[i]);
}
}