#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x= %dy= %d",x,y);
}
