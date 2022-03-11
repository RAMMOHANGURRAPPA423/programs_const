#include <stdio.h>

int main()
{
  int a=10;
  int b=20;
  const int *ptr=&a;//pointer to constant
  printf("%d\n",*ptr);
 *ptr=30;//value change not possible
  //printf("%d\n",*ptr);
  ptr=&b;//address is possible 
   printf("%d\n",*ptr);
}
