#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20],r[20];
    int i,l,j;
    gets(s);
    l=strlen(s);
    strcpy(r,s);
    strrev(r);
    puts(r);
    j=strcmp(s,r);
    if(j==0)
    printf("palidrome");
    else
    printf("not palidrome");
}
