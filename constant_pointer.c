#include <stdio.h>

int main()
{
    int a=10,b=20;
    int* const ptr=&a;//constant pointer

    printf("%d\n",*ptr);
    *ptr=30;//value can be changed
    printf("%d",*ptr);
        //ptr=&b;//not possiblr assigning address
        //printf("%d",*ptr);
}
