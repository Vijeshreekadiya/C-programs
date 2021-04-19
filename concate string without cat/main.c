#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    gets(s);
    gets(s1);
    int i,l1,l2,l=0;
    l1=strlen(s);
    l2=strlen(s1);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;s1[i]!='\0';i++)
    {
        s[l+i]=s1[i];
    }
    s[l+i]='\0';
    printf("%s",s);
}
