#include<stdio.h>

int main(){
	int canhDay, chieuCao;
	printf("vui long nhap canh day va chieu cao: ");
	scanf("%d %d", &canhDay, &chieuCao);
	printf("canh day va chieu cao la: %d và %d \n", canhDay, chieuCao);
	float dienTich = 0.5 * chieuCao * canhDay;
	printf("dien tich hinh tm giac la: %.2f \n", dienTich);
	return 0;
}
