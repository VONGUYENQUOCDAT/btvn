#include<stdio.h>

int main() {
    int a = 10;

    int *ptr = &a;

    printf("Cach 1\n");
    printf("Gia tri cua a la: %d\n", a);
    printf("Dia chi cua a: %p\n", &a);

    printf("\nCach 2\n");
    printf("Gia tri cua a (thong qua ptr): %d\n", *ptr);
    printf("Dia chi cua a (thong qua ptr): %p\n", ptr);

    return 0;
}

