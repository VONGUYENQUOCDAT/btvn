#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    int len = strlen(str);
    printf("Chuoi goc la: \"%s\"\n", str);
    printf("Chuoi dao nguoc la: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

