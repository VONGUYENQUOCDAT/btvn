#include<stdio.h>
int main(){
	FILE *f;
	char str[256]; 
	f = fopen("bt01.txt","w");

	printf("Nhap mot chuoi bat ki: ");
	fgets(str,sizeof(str),stdin);
	fputs(str,f);
	
	fclose;
	printf("Da ghi vao file");
	return 0; 
} 
