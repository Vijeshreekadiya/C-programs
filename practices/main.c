#include <stdio.h>
#include <stdlib.h>

int main()
{
 char s[30];
 scanf("%s",s);
 int i,l,x=0,y=0,z=0;
 l=strlen(s);
 printf("length is %d\n",l);
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]>=65 && s[i]<=90)
     {
        x++;
     }
     else if (s[i]>=48 && s[i]<=57)
        {
        y++;
        }
     else
    {
        z++;
    }
        printf("alphabet is %d\n",x);
        printf("%S\n",s[i]);
        printf("number is %d\n",y);
        printf("%d\n",s[i]);
        printf("symbol is %d\n",z);
        printf("%d\n",s[i]);
 }



}
