#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,msb,k,lsb=1;
    scanf("%d",&num);
    k=sizeof(num)*8;
    printf("%d",k);
    msb=1<<(k-1);
    if (num & msb)
        printf("it is set\n");
    else
       printf("it is not set\n");
    if (num & lsb)
        printf("lsb it is set\n");
    else
       printf("lsb it is not set\n");
    return 0;
}
