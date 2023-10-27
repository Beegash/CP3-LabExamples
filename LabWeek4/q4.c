#include <stdio.h>

int plus(int a, int b)
{
	return (a + b);
}
int minus(int a, int b)
{
	return (a - b);
}
int operation(int (*function)(int, int), int a, int b)
{
	return (function(a, b));
}

int (*pluss)(int, int) = plus;

int (*minuss)(int, int) = minus;

int main(void)
{
	int a;
	int b;
	a = 5;
	b = 7;
	operation(minuss, a, b);
	printf("Sum of a and b : %d\n", operation(pluss, a, b));
	printf("Substraction of a and b: %d", operation(minuss, a, b));
}