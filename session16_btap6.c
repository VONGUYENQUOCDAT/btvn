#include<stdio.h>

int Findvalue(int *arr, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == value) {
			return i;
		}
	}
	return -1;
}

int main () {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int value = 7;
	int result = Findvalue(arr, size, value);
	if (result != -1) {
		printf("Phan tu %d trong mang nam o vi tri thu %d.",value,result);
	} else {
		printf("Phan tu %d khong ton tai trong mang.",value);
	}
return 0;
}
