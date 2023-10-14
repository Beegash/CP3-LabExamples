#include <stdio.h>
int ft_istrue(int a)
{
    static int counter = 0;
    if (a)
    {
        counter++;
        return counter;
    }
    return counter;
}
int main(void)
{
    ft_istrue(1);
    ft_istrue(1);
    ft_istrue(1);
    ft_istrue(1);
    printf("%d", ft_istrue(1));
}