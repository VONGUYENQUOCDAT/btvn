#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);

        printf("Ten: ");
        getchar();
        fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
        if (sinhVien[i].name[strlen(sinhVien[i].name) - 1] == '\n') {
            sinhVien[i].name[strlen(sinhVien[i].name) - 1] = '\0'; // xoa ki tu xuong dong 
        }

        printf("Tuoi: ");
        scanf("%d", &sinhVien[i].age);

        printf("So dien thoai: ");
        scanf("%s", &sinhVien[i].phoneNumber);
    }


    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("  Ten: %s\n", sinhVien[i].name);
        printf("  Tuoi: %d\n", sinhVien[i].age);
        printf("  So dien thoai: %s\n", sinhVien[i].phoneNumber);
    }

    return 0;
}

