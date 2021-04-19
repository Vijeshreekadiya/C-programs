#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20],r[20];
    gets(s);
    strcpy(r,s);
    puts(r);
    int i,l,j;
    l= strlen(r);
    for (i=l-1;i>=0;i--)
    {
     printf("%c",r[i]);
    }
    puts(r);

    /*j= strcmp(r,s);
    if(j==0)
    {
        printf("\nstring is palidrome");
    }
    else
    { printf("string is not palidrome");
    }
*/

}
