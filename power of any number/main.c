#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a=1,i;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("power of %d to %d is",x,y);
    for (i=1;i<=y;i++)
    {
        a=a*x;
    }
    printf("%d",a);

}
