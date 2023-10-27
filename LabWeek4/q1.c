#include <stdio.h>

int main(void)
{
	int nums[6] = {1, 2, 3, 4, 5};
	int a = 0;
	while (nums[a])
	{
		nums[a] = nums[a] + 1;
		a++;
	}
	a = 0;
	while (nums[a])
	{
		printf("%d\n", nums[a]);
		a++;
	}
}