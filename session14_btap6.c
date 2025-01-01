#include <stdio.h>
int countLetters(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    return count;
}

int main() {
    char input[100];
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int letterCount = countLetters(input);
    printf("So ki tu la chu cai trong chuoi la: %d\n", letterCount);

    return 0;
}

