#include<stdio.h>
int main(){
	FILE *f;
	char line[256]; 
	f=fopen("bt01.txt","r");
	if(f==NULL){
		printf("Khong the mo file");
		return 1; 
	} 
    if (fgets(line,sizeof(line),f)!=NULL){
    	printf("Dong dau tien la : %s",line); 
	} else{
		printf("File rong");
	} 
	fclose(f); 
	return 0; 
} 
