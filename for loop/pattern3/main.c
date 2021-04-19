#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val=1;
    for (int i=1;i<=5;i++)
    {
       for (int j=5;j>i; j--)
       {
           printf(" ");
       }
       for (int k=1; k<=i; k++)
       {
           printf("%d ", val);
       }
       val++;
       printf("\n");
    }
}
