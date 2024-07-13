#include <stdio.h>
#include "swap.h"

int main() {
    int first, second;

    printf("First number = ");
    if (!scanf("%d", &first)) return -1;

    printf("Second number = ");
    if (!scanf("%d", &second)) return -1;

    printf("Before Swap: First = %d, Second = %d\n", first, second);

    swap(&first, &second);

    printf("After Swap: First = %d, Second = %d\n", first, second);

    return 0;
}
