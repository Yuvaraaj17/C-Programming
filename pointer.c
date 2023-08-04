#include <stdio.h>

int main()
{
    int var1 = 11;
    int var2=10;
    int *ptr1,*ptr2;
    ptr1 = &var1;
    ptr2=&var2;
    printf("%d\n",&ptr1);
    printf("%d\n",&ptr2);
    printf("%d\n",ptr1);
    printf("%d",ptr2);
}