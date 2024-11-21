#include<stdio.h>

int main(){
	int number;
	printf("hay nhap so co 4 chu so: ");
	scanf("%d", &number);
	int a = number / 1000;
	int b = (number % 1000) /100;
	int c = (number % 100) /10;
	int d = number % 10;
	int tong = a + b + c + d;
	printf("tong cua cac chu so tren la: %d", tong);
	return 0;
}
