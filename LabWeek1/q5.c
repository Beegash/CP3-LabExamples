#include <stdio.h>

int main(void)
{
    int nbr;
    int i;
    int boolean;

    boolean = 1;
    i = 2;
    printf("Give an integer value :\n");
    scanf("%d", &nbr);
    if (nbr < 2)
    {
        printf("The number is not prime !");
        return (0);
    }
    while (nbr / i != 1)
    {
        if (nbr % i == 0)
        {
            boolean = 0;
            break;
        }
        i++;
    }
    if (boolean)
        printf("The number is prime !");
    else
        printf("The number is not prime. It can be divided by %d !", i);
    return (0);
}