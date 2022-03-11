#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    const int *const ptr=&a;
    printf("%d\n",*ptr);
    *ptr=50;
     printf("%d\n",*ptr); 
}
