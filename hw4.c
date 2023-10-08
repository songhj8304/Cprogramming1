#include<stdio.h>

int main(void) {
	int num;
	int divisor = 0;
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			divisor += 1;
		}
	}
	if (divisor >= 1) {
		printf("It is not a prime number\n");
	}
	else {
		printf("It is a prime number\n");
	}

	return 0;
}