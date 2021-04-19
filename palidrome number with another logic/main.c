#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,n,rev=0,rem;
scanf("%d",&n);
x=n;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(x==rev)
{
    printf("it is palidrome");
}
else
{
    printf("it is not palidrome");
}
}
