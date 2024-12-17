#include <stdio.h>
int main () {
	int a,S;
	printf("Nhap vao so nguyen duong tu 1-10: ");
	scanf("%d",&a);
	for(int i=1; i <= 10; i++) {
		S=a*i;
		printf("%d x %d = %d\n",a,i,S);
		}
return 0;
}
