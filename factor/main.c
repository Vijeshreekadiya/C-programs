#include <stdio.h>
#include <stdlib.h>

int factor(x);
int main()
{int k,j;
scanf("%d",&k);
printf("factor of %d is",k);
j=factor(k);
printf("%d",j);
}
int factor(x)
{ int a;
 if (x<=0)
 {
     return(1);
 }
 else
    {
        a=(x*(factor(x-1)));
    }
 }
