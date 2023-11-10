#include <stdio.h>
#define SIZE 5
int *sum(int nbr1[SIZE], int nbr2[SIZE])
{
	int i;
	static int sum[SIZE];

	i = 0;
	while (i < SIZE)
	{
		sum[i] = nbr1[i] + nbr2[i];
		i++;
	}

	return (sum);
}

int main(void)
{
	int array[5] = {1, 3, 5, 6, 7};
	int array2[5] = {2, 4, 5, 6, 7};
	int *result = sum(array,array2);
	int i=0;
	while (i<5)
	{
		printf("%d ,", result[i]);
		i++;
	}
	
}