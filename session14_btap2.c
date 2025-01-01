#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    printf("Chuoi da khai bao la: \"%s\"\n", str);
    printf("Cac ki tu trong chuoi la: \n");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
        if (i < strlen(str) - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

