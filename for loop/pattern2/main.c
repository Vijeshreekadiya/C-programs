#include <stdio.h>
#include <stdlib.h>

int main()
{
   for (int i=1;i<=3;i++)
   {
        for (int j=2;j>=i;j--)
       {
          printf(" ");
       }
        for (int k=1;k<=i;k++)
       {
          printf("* ");
       }
       printf("\n");
   }
}


