#include <stdio.h>
int main() {
	int n,i;
	printf("nhap mot so nguyen bat ki: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if(n%i==0) {
			printf("Uoc cua %d la %d\n",n,i);
		}
	}
return 0;
}
