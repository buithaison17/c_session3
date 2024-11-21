#include<stdio.h>
int main(){
	const float PI = 3.14;
	float banKinh, chuVi, dienTich;
	printf("hay nhap ban kinh: ");
	scanf("%f", &banKinh);
	chuVi = 2 * PI * banKinh;
	dienTich = PI * banKinh * banKinh;
	printf("chu vi va dien tich hinh tron la: %.1f va %.1f", chuVi, dienTich);
	return 0;
}
