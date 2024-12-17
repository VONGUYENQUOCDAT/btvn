#include <stdio.h>
int main () {
	int a,S;
	printf("Moi ban nhap so nguyen: ");
	scanf("%d",&a);
	S = 0;
	for(int i=0; i <= a; i++) {
		S=S+i;
	}
	printf("Tong la: %d\n",S);
	return 0;
}
