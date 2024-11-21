#include<stdio.h>

int main(){
	int soBanDau;
	printf("hay nhap so can dao nguoc (co 4 chu so): ");
	scanf("%d", &soBanDau);
	int hangNghin = soBanDau / 1000;
	int hangTram = (soBanDau % 1000) / 100;
	int hangChuc = (soBanDau % 100) / 10;
	int hangDonVi = soBanDau % 10;
	printf("so sau khi dao nguoc la: %d%d%d%d", hangDonVi, hangChuc, hangTram, hangNghin);
return 0;
}
