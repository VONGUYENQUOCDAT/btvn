#include <stdio.h>

void Sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int a = 1, b = 3;
    int result = 0;
    Sum(&a, &b, &result);

    printf("Tong cua %d và %d la: %d\n", a, b, result);

    return 0;
}

