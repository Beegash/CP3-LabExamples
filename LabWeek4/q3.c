#include <stdio.h>

int findsum(int a, int b) {
    return a + b;
}

int (*fndptr)(int, int) = &findsum; 
int main(void)
{
	int a;
	int b;
	a = 32;
	b = 23;
	printf("%d", fndptr(a, b));
}