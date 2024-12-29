#include<stdio.h>

int sum(a,b){
printf("Tong hai so la %d",a+b); }
int main(){
	int a,b; 
	printf("Nhap so thu I: ");
	scanf("%d",&a);
	printf("Nhap so thu II: ");
	scanf("%d",&b);
	sum(a,b);  
	return 0;
}
