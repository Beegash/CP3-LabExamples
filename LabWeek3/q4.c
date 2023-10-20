#include <stdio.h>

int main(void)
{
    int *a;
    int *b;
    int *tmp;

    tmp = b;
    b = a;
    a = tmp;
    printf("Value of a and b : %d , %d", *a, *b);
    return (0);
}