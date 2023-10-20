#include <stdio.h>

int main(void)
{
    void *ptr;
    int *ptr2;
    int a;

    a = 5;
    ptr = &a;
    ptr2 = (int *)ptr;
    printf("The value of the pointer is : %d", *ptr2);
    return (0);
}