#include <stdio.h>

void swap(int* a, int* b);

int main() {
    int fist, second;

    printf("First number = ");
    if (!scanf("%d", &first)) return -1;

    printf("Second number = ");
    if (!scanf("%d", &second)) return -1;

    printf("Before Swap: First = %d, Second = %d\n", first, second);

    swap(&first, &second);

    printf("After Swap: First = %d, Second = %d\n", first, second);

    return 0;
}

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
