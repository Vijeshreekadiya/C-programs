#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0,b=0;
    for (i=1;i<=10;i++)
    {
        scanf("%d",&j);
        if (j%2==0)
    {
        printf("%d is even",j);
        a++;
    }
    else
    {
        printf("%d is odd\n",j);
        b++;
    }
    }
    printf(" total even numbers=%d\n",a);
    printf(" total odd numbers=%d\n",b);
}


