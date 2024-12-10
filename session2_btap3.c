#include <stdio.h>
int main() {
	int a,b,S,H,P;
	float C;
	printf("Nhap vao so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b: ");
	scanf("%d", &b);
	printf("Tong hai so la: %d\n", S=a+b);
	printf("Hieu hai so la: %d\n", H=a-b);
	printf("Tich hai so la: %d\n", P=a*b);
	printf("Thuong hai so la: %.2f\n", C=a/b);
	return 0;
}
