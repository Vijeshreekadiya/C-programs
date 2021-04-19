#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,n,result;
    scanf("%d %d %d",&num1,&num2,&n);
    printf(" press number to operate function\n");
    switch(n)
    {
                case 1:   result=num1+num2;
                printf("addition is =%d",result);
                break;
                case 2:   result=num1-num2;
                printf("subtraction is =%d",result);
                break;
                case 3:   result=num1*num2;
                printf("multiplication is =%d",result);
                break;
                case 4:   result=num1/num2;
                printf("division is =%f",result);
                break;
    }

}
