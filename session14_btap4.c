#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    char ch;
    int count = 0;
    printf("Chuoi da khai bao la: \"%s\"\n", str);
    printf("Nhap mot ki tu bat ki: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    if (count > 0) {
        printf("Ki tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    } else {
        printf("Ki tu '%c' khong xuat hien trong chuoi.\n", ch);
    }

    return 0;
}

