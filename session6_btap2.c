#include <stdio.h>
int main () {
	int a,sum = 0;
	printf("Moi ban nhap 5 so nguyen: \n");
	for (int i=1; i <= 5; i++) {
		scanf("%d",&a);
		if (a%2 != 0) {
			sum++;
		}
	}
	printf("So luong so le la: %d\n",sum);
	printf("So luong so chan la: %d",5 - sum);
	return 0;
}
