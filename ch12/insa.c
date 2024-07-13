#include <stdio.h>

int main() {

#ifdef KOREAN
    printf("Annyeong haseyo\n");
#else
    printf("Hello\n");
#endif

    return 0;
}
