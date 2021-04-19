#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[3][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("swapped array is\n");
   for (j=0;j<3;j++)
    {
        for (i=0;i<3;i++)
        {
           printf("%d",a[i][j]);
        }
        printf("\n");
    }

    {
        for (j=0;j<3;j++)
        {
          printf("%d",a[i][j]);
        }
        printf("\n");
    }

    {
        for (j=0;j<3;j++)
        {
          printf("%d",a[j][i]);
        }
        printf("\n");
    }

}
