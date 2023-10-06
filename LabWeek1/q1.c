#include <stdio.h>

int main(void)
{
    int a;
    int sum;

    sum = 0;
    printf("Please give a number except -1 : \n");
    while (a != -1)
    {
        scanf("%d", &a);
        sum += a;
    }
    sum++;
    printf("\nSum of given numbers = %d", sum);
    return (0);
}