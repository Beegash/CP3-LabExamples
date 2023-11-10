#include <stdio.h>

int sum(int a, int b)
{
	return (a + b);
}
int avg(int a, int b)
{
	return ((a + b) / 2);
}

void *ft_function_pointer(int a)
{
	if (a < 5)
		return (sum);
	if (a >= 5)
		return (avg);
	return (0);
}

int main(void)
{
	int a = 5;
	int (*ptr)(int, int) = ft_function_pointer(a);
	printf("%d", ptr(7, 3));
	return (0);
}