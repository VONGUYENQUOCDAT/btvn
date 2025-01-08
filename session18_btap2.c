#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;
    printf("Nhap thong tin sinh vien:\n");
    printf("Ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    if (sv.name[strlen(sv.name) - 1] == '\n') { // Xoa ki tu xuong dong cua fgets
        sv.name[strlen(sv.name) - 1] = '\0';
    }

    printf("Tuoi: ");
    scanf("%d", &sv.age);
    printf("So dien thoai: ");
    scanf("%s", sv.phoneNumber);

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}

