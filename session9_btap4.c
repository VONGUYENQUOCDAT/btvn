#include <stdio.h>

#define MAX_SIZE 100 // K�ch thu?c t?i da c?a m?ng

// H�m hi?n th? c�c ph?n t? trong m?ng
void displayArray(int array[], int size) {
    if (size == 0) {
        printf("M?ng r?ng\n");
        return;
    }
    printf("C�c ph?n t? trong m?ng l�: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// H�m ch�nh
int main(void) {
    int arrayInt[MAX_SIZE]; // M?ng ch?a ph?n t?
    int size = 0;           // K�ch thu?c th?c t? c?a m?ng

    while (1) {
        // Hi?n th? menu
        printf("\n==============MENU================\n");
        printf("1. Nh?p ph?n t? cho m?ng\n");
        printf("2. Hi?n th? m?ng\n");
        printf("3. Th�m m?i ph?n t? v�o m?ng\n");
        printf("4. S?a gi� tr?\n");
        printf("5. X�a ph?n t?\n");
        printf("6. Tho�t\n");
        printf("H�y nh?p l?a ch?n: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // Nh?p ph?n t? cho m?ng
                int n;
                printf("H�y nh?p s? lu?ng ph?n t?: ");
                scanf("%d", &n);
                if (n <= 0 || n > MAX_SIZE) {
                    printf("S? lu?ng ph?n t? kh�ng h?p l?! (1 - %d)\n", MAX_SIZE);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nh?p Array[%d]: ", i);
                    scanf("%d", &arrayInt[i]);
                }
                size = n;
                printf("�� nh?p m?ng th�nh c�ng.\n");
                break;
            }
            case 2: { // Hi?n th? m?ng
                displayArray(arrayInt, size);
                break;
            }
            case 3: { // Th�m m?i ph?n t?
                if (size == MAX_SIZE) {
                    printf("M?ng d� d?y, kh�ng th? th�m ph?n t? m?i.\n");
                    break;
                }
                int addIndex, valueInput;
                printf("H�y nh?p gi� tr? c?n th�m: ");
                scanf("%d", &valueInput);
                printf("H�y nh?p v? tr� c?n th�m (0 d?n %d): ", size);
                scanf("%d", &addIndex);

                if (addIndex < 0 || addIndex > size) {
                    printf("V? tr� kh�ng h?p l?!\n");
                    break;
                }

                for (int i = size - 1; i >= addIndex; --i) {
                    arrayInt[i + 1] = arrayInt[i];
                }
                arrayInt[addIndex] = valueInput;
                size++;
                printf("�� th�m ph?n t? th�nh c�ng.\n");
                break;
            }
            case 4: { // S?a gi� tr?
                int editIndex, newValue;
                printf("H�y nh?p v? tr� c?n s?a (0 d?n %d): ", size - 1);
                scanf("%d", &editIndex);

                if (editIndex < 0 || editIndex >= size) {
                    printf("V? tr� kh�ng h?p l?!\n");
                    break;
                }

                printf("H�y nh?p gi� tr? m?i [gi� tr? cu = %d]: ", arrayInt[editIndex]);
                scanf("%d", &newValue);
                arrayInt[editIndex] = newValue;
                printf("�� c?p nh?t gi� tr? th�nh c�ng.\n");
                break;
            }
            case 5: { // X�a ph?n t?
                int deleteIndex;
                printf("H�y nh?p v? tr� c?n x�a (0 d?n %d): ", size - 1);
                scanf("%d", &deleteIndex);

                if (deleteIndex < 0 || deleteIndex >= size) {
                    printf("V? tr� kh�ng h?p l?!\n");
                    break;
                }

                for (int i = deleteIndex; i < size - 1; ++i) {
                    arrayInt[i] = arrayInt[i + 1];
                }
                size--;
                printf("�� x�a ph?n t? th�nh c�ng.\n");
                break;
            }
            case 6: { // Tho�t
                printf("Tho�t chuong tr�nh.\n");
                return 0;
            }
            default: {
                printf("L?a ch?n kh�ng h?p l?. Vui l�ng nh?p t? 1 - 6.\n");
                break;
            }
        }
    }

    return 0;
}

