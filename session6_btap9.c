#include <stdio.h>
int main () {
	int n,a,b,c,Sum = 0;
	for(n=100; n <= 999; n++) {
		a = n/100;
		b = (n/10)%10;
		c = n%10;
		Sum = (a*a*a)+ (b*b*b)+ (c*c*c);
		if(Sum == n) {
			printf("%d\n",Sum);
		}
	}
	return 0;
}
