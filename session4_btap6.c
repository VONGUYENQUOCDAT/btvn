#include <stdio.h>

int main() {
    int sodiencu, sodienmoi, sodiensudung;
    float hoadon = 0;
    printf("Nhap so dien dau thang (kWh): ");
    scanf("%d", &sodiencu);
    printf("Nhap so dien cuoi thang (kWh): ");
    scanf("%d", &sodienmoi);
    if (sodienmoi < sodiencu) {
        printf("So dien moi phai lon hon so dien cu\n");
        return 0;
    }
    sodiensudung = sodienmoi - sodiencu;
    if (0 <= sodiensudung && sodiensudung < 50) {
        hoadon = sodiensudung * 10000;
    } else if (50 <= sodiensudung && sodiensudung < 100) {
        hoadon = sodiensudung * 15000;
    } else if (100 <= sodiensudung && sodiensudung < 150) {
        hoadon = sodiensudung * 20000;
    } else if (150 <= sodiensudung && sodiensudung < 200) {
        hoadon = sodiensudung * 25000;
    } else {
        hoadon = sodiensudung * 30000;
    }
    printf("Luong dien tieu thu la: %d kWh \n", sodiensudung);
    printf("So tien dien phai tra: %.0f VND \n", hoadon);
    return 0;
}

