#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file;
	char filename[] = "bt05.txt";
	int lines;
	char str[256];
    
	file = fopen(filename, "w");
	if (file == NULL) {
		printf("Khong co file!\n");
		return 1;
	}
        
	printf("Nhap so dong: ");
	scanf("%d", &lines);
	getchar();
    
    // Nhap noi dung vao file
	for (int i=0; i<lines; i++) {
		printf("Nhap dong thu %d: ", i+1);
		fgets(str, sizeof(str), stdin);
		fprintf(file, "%s", str);
	}
    
	fclose(file);
    
    // mo file
	file = fopen(filename, "r");
	if (file == NULL) {
		printf("Khong co file!\n");
		return 1;
	}
    
    // Doc file
	printf("\nNoi dung file: \n");
	while (fgets(str, sizeof(str), file) != NULL) {
		printf("%s", str);
	}
    
	fclose(file);
	return 0;
}

