#include<stdio.h>

void recursive(int n) {
	if (n <= 0) return;
	recursive(n / 2);
	printf("%d", n % 2);
}

int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	recursive(num);
	return 0;
}