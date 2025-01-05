#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int chucai=0,num=0,kitudb=0;
	printf("Nhap mot chuoi: ");
	fgets(str,100,stdin);
	str[strcspn(str, "\n")] = '\0';
	for(int i=0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			chucai++;
		}else if(str[i] >= '1' & str[i] <= '9') {
			num++;
		}else{
			kitudb++;
		}
	}

	printf("So luong chu cai trong chuoi la: %d\n",chucai);
	printf("So luong chu so trong chuoi la: %d\n",num);
	printf("So luong ki tu dac biet trong chuoi la: %d\n",kitudb);
	return 0;
}
