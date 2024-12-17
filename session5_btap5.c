#include <stdio.h>
int main () {
	int S;
	for(int i=1; i <= 9; i++) {
		for(int a=1; a <= 9; a++) {
		S=a*i;
		printf("%d x %d = %d\n",a,i,S);
		}
    }
return 0;
}
