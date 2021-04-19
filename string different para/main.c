#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str1[20],str2[20],str3[20];
   unsigned int j;
   gets(str1);
   gets(str2);
   gets(str3);
   //printf("copy str1 to str2\n");
   //strcpy(str2,str1);
   //printf("copied string %s\n",str2);
   strcat(str1,str2);
      printf("concated string %s\n",str1);
   strcat(str1,str3);
   printf("concated string %s\n",str1);
   j=strcmp(str2,str3);
   printf("compare value= %d",j);
   if (j==0)
    printf("\n string are equal");
   else
    printf("\n string are different");
  return 0;
}
