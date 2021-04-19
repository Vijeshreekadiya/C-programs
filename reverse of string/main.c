#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char s[20]="vijeshree kadia";
    int i,length;
    length=strlen(s);
    printf("%d\n",length);
    for(i=length-1;i>=0;i--)
     {
       printf("%c",s[i]);
     }
    return 0;
 }
