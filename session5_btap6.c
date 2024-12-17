#include <stdio.h>
int main () {
	while (1) {
	printf("CALCULATOR\n");
	printf("1. Tong 2 so\n");
	printf("2. Hieu 2 so\n");
	printf("3. Tich 2 so\n");
	printf("4. Thuong 2 so\n");
	printf("5. Thoat\n");
	int a,b,n,S,C,H,N;
	printf("Moi ban nhap so I: ");
	scanf("%d",&a);
	printf("Moi ban nhap so II: ");
	scanf("%d",&b);
	printf("Moi ban nhap lua chon: ");
	scanf("%d",&n);
	switch(n) {
		case 1:
			printf("Tong 2 so la: %d\n",S=a+b);
			break;		
		case 2:
			printf("Hieu 2 so la: %d\n",H=a-b);
			break;
		case 3:
			printf("Tich 2 so la: %d\n",N=a*b);
			break;
		case 4:
			printf("Thuong 2 so la: %d\n",C=a/b);
			break;
		case 5:
			return 0;
	}
	printf("\n");
}
}
