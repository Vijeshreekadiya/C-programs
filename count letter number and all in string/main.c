#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    gets(str);
    int i,x=0,y=0,z=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]>=65 && str[i]<=90)
          {
             x++;
            printf(" character are = %c\n",str[i]);
          }
        else if (str[i]>=48 && str[i]<=57)
        {
           printf(" number are = %c\n",str[i]);
           y++;
        }
        else
            printf(" symbol are = %s\n",str[i]);
            z++;
    }
    printf("charater = %d\n",x);
    printf("numbers = %d\n",y);
    printf("symbol = %d\n",z);
}
