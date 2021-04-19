#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       if (a%i==0)
       {
           c++;
       }
    }
    if(c==2){ printf("%d is prime number",a);}
    else{printf("it is not prime");}
}
