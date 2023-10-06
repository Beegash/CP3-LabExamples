#include <stdio.h>

int main(void)
{
    char str[50];
    char ch;
    int index;

    index = 0;
    printf("Please give char values : \n");
    while (str[index] != 'x')
    {
        scanf("%c", &ch);
        if (ch == 'x' || ch == 'c')
            break;
        str[index] = ch;
        index++;
    }
    printf("Values in char array : \n%s", str);
}