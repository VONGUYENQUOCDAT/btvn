#include <stdio.h>
int main () {
	const int mk = 12345;
	int a;
	while (1) {
		printf("Moi ban nhap mat khau (5chuso): ");
		scanf("%d",&a);
		if (a == mk) {
			break;
		}
	}
	printf("Mat khau chinh xac!");
	return 0;
}
