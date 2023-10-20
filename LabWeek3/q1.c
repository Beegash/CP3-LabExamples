#include <stdio.h>

int main(void)
{
    int *ptr;
    int a;

    a = 5;
    ptr = &a;
    printf("The value of the pointer is : %d", *ptr);
    return (0);
}