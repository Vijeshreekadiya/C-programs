#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[4],b[4];

    for (i=0;i<4;i++)
      {
        scanf("%d",&a[i]);
      }
      for  (j=0;j<4;j++)
      {
        scanf("%d",&b[j]);
      }
    for (i=0;i<4;i++)
       {
        printf("array a= %d\n",a[i]);
       }
       for  (j=0;j<4;j++)
       {
           printf("array b= %d\n",b[j]);
       }
     for (i=0;i<4;i++)
     {
     a[i]=a[i]+b[j];
     b[j]=a[i]-b[j];
     a[i]=a[i]-b[j];
     }
     printf(" swapped array is ");
     for  (i=0;i<4;i++)
     {
     printf("a= %d\tb= %d\n", a[i],b[j]);
     }
}
