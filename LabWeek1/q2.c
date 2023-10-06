#include <stdio.h>

int main(void)
{
    char a;
    char b;
    char c;
    char biggest;

    printf("Please give three char values : \n");
    scanf("%c %c %c", &a, &b, &c);
    biggest = a > b ? a : b;
    biggest = biggest > c ? biggest : c;
    printf("Variable with highest ASCII value is : %c", biggest);
}