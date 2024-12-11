#include <stdio.h>
int main () {
	float a,b,c,T,C;
	printf("Moi ban nhap diem Toan: ");
	scanf("%f",&a);
	printf("Moi ban nhap diem Van: ");
	scanf("%f",&b);
	printf("Moi ban nhap diem Anh: ");
	scanf("%f",&c);
	printf("Tong diem cua ban la %.2f\n",T=a+b+c);
	printf("Diem trung binh cua ban la %.2f",C=(a+b+c)/3);
return 0;
}
