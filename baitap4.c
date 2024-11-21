#include<stdio.h>
int main(){
	float toan, van, anh, sum, avg;
	printf("hay nhap diem toan: ");
	scanf("%f", &toan);
	printf("hay nhap diem van: ");
	scanf("%f", &van);
	printf("hay nhap diem anh: ");
	scanf("%f", &anh);
	sum = toan + van + anh;
	avg = sum / 3;
	printf("tong diem va diem trung binh cong la: %.1f va %.1f", sum, avg);
	return 0;
}
