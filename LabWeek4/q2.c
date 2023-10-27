#include <stdio.h>

void swapPointers(int **ptr1, int **ptr2) {
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("ptr1: %p\n", (void*)ptr1);
    printf("ptr2: %p\n", (void*)ptr2);
    swapPointers(&ptr1, &ptr2);
    printf("ptr1: %p\n", (void*)ptr1);
    printf("ptr2: %p\n", (void*)ptr2);

    return 0;
}
