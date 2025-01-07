#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 1, b = 2;

    printf("Gia tri ban dau la:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);
    
    printf("Gia tri sau khi hoan doi la:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

