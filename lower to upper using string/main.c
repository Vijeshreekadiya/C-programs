#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    gets(str);
    puts(str);
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            str[i]= str[i]+32;
            printf("%s",str[i]);
        }
        else
        {
            str[i]= str[i]-32;
            printf("%s",str[i]);
        }
    }
}
