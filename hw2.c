#include<stdio.h>

int main(void) {
	float km;
	printf("Please enter kilometers: ");
	scanf_s("%f", &km);
	printf("%.1fkm is equal to %.1f miles.", km, km * 1000 / 1609);
	
	return 0;
}