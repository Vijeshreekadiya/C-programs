#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<10;i++)
    {
    if(a[i]>k)
    {
        k=a[i];
    }
    }printf("number is greatest %d",k);
}
