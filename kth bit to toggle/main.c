#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,k,temp=1;
    scanf("%d%d",&num,&k);
    printf(" nums is=%d kth digit is=%d\n",num,k);
    temp=1<<(k-1);
    printf("%d\n",temp);
    if (num & temp)
    {
        printf("%d is set\n",k);
    }
    else
    {
      printf("%d is unset\n",k);
    }
    return 0;
}
