#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[40]="My name is VIJESHREE";
   int i=0;
   while(str[i]!='\0')
   {
       if (islower(str[i]))
       {
           printf("%c",toupper(str[i]));
       }
       else if (isupper(str[i]))
       {
           printf("%c",tolower(str[i]));
       }
       else
       {
           printf("%c",str[i]);
       }
       i++;
    }
    return 0;
}
