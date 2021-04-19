#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    gets(str);
    puts(str);
    int i=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]<='Z'||str[i]>='A')
        {
            printf(" cahrater is lower case %s",str[i]);
        }
        else if (str[i]<='z'||str[i]>='a')
        {
            printf(" cahrater is upper case %s",str[i]);
        }
        else
        {
            printf(" string contain number %s",str[i]);
        }
    }
}
