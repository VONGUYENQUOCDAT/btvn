#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int countWords(const char *str) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char input[100];
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int wordCount = countWords(input);
    printf("So tu trong chuoi la: %d\n", wordCount);

    return 0;
}

