#include <stdio.h>

int sum(int a, int b)
{
	return (a + b);
}

void *ft_function_pointer()
{
	return (sum);
}

int main(void)
{
	int (*sumptr)(int, int) = ft_function_pointer();
	printf("%d", sumptr(3,5));
	return (0);
}