#include<stdio.h>
int main(){
	float doC, doF;
	printf("hay nhap do c: ");
	scanf("%f", &doC);
	doF = doC * 9 / 5 + 32;
	printf("do F la: %.1f", doF);
	return 0;
}
