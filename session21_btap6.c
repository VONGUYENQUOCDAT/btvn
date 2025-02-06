#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *sourceFile, *destFile;
	char sourceFilename[] = "bt01.txt"; // file nguon
	char destFilename[] = "bt06.txt"; // file copy
	char str[256];
    
	// doc file nguon
	sourceFile = fopen(sourceFilename, "r");
	if (sourceFile == NULL) {
		printf("Khong co file nguon!\n");
		return 1;
	}
    
	// mo file copy de ghi
	destFile = fopen(destFilename, "w");
	if (destFile == NULL) {
		printf("Khong co file!\n");
		fclose(sourceFile);
		return 1;
	}
    
    // sao chep noi dung
		while (fgets(str, sizeof(str), sourceFile) != NULL) {
		fputs(str, destFile);
	}
    
	printf("Sao chep thanh cong tu file %s sang file %s.\n", sourceFilename, destFilename);
    
	fclose(sourceFile);
	fclose(destFile);
	return 0;
}

