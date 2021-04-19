#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,n;
    scanf("%f",&n);
    for(i=0.01;i*i<=n;i+=0.01);
    printf("%f",i);
}
