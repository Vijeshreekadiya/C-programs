#include <stdio.h>
#include <stdlib.h>

struct book
    {
        int pages;
        float price;
        char name[10];
    };

int main()
{
    struct book b1;
    {
        scanf("%d",&b1.pages);
        scanf("%f",&b1.price);
        scanf("%s",&b1.name);
        printf("pages of book are= %d\n",b1.pages);
        printf("price of book is = %f\n",b1.price);
        printf("name of book = %s\n",b1.name);
    };

}
