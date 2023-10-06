#include <stdio.h>

int ft_polindrome(int a)
{
    int z;
    int temp;

    temp = a;
    z = 0;
    while (a > 0)
    {
        z = z * 10 + (a % 10);
        a /= 10;
    }
    if (temp == z)
        return 1;
    return 0;
}
int main(void)
{
    int num;

    printf("Please give an integer value : ");
    scanf("%d", &num);
    if (ft_polindrome(num))
        printf("Number is polindrome");
    else
        printf("Number is not polindrome");
}