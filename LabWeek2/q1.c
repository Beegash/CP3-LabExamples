#include <stdio.h>
int main(void)
{
    int a;
    float b;
    double c;

    a = 5;
    b = 7.6;
    c = 12.1;
    printf("Sum of integer and float is : %lu\n", sizeof(a + b));
    printf("Sum of double and float is : %lu\n", sizeof(b + c));
    return (0);
}