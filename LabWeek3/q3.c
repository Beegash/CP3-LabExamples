#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    ptr3 = ptr1;
    if (ptr1 > ptr2)
    {
        while (ptr3 > ptr2)
        {
            printf("Adress is : %p and Value is :%d\n",ptr3,*ptr3);
            ptr3--;
        }
    }
    if (ptr1 < ptr2)
    {
        while (ptr3 < ptr2)
        {
            printf("Adress is : %p and Value is :%d\n",ptr3,*ptr3);
            ptr3++;
        }
    }

    return (0);
}
