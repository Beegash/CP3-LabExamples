#include <stdio.h>
void ft_print(int *arr, int size)
{
    int i;

    i = 0;
    while (size > 0)
    {
        printf("%d ", arr[i]);
        size--;
        i++;
    }
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / 4;

    printf("The elements of the array are : \n");
    ft_print(arr, size);
    return (0);
}