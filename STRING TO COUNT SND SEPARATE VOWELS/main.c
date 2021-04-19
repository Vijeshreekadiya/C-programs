#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    int i,x=0,y=0,length;
    for (i=0;str[i]='\0';i++)
    {
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
     {
      x++;
     }
     else
     y++;
    }
    length= strlen(str);
    printf(" length= %d\n",length);
    printf(" number of vowels are= %d\n",x);
    printf(" number of consonant are= %d\n",y);
}
