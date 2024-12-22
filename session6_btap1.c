#include <stdio.h>
int main () {
	int a,sum = 0;
	printf("Moi ban nhap 5 so nguyen: \n");
	for (int i=1; i <= 5; i++) {
		scanf("%d",&a);
		if (a%2 != 0) {
			sum = sum + a;
		}
	}
	printf("Tong cac so le la: %d",sum);
	return 0;
}
