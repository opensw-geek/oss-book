#include <stdio.h>

void message(int iter);

int main() {
    int sum = 5;
    message(sum);
    return 0;
}

void message(int iter) {
    for (int i = 0; i < iter; i++) {
        printf("Hellow Open Source Software %d\n", i);
    }
}
