#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,multiplication;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multiplication=i*n;
        printf("%d*%d=%d \n",n,i,multiplication);
    }
}
