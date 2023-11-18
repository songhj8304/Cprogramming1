#include<stdio.h>
#include<math.h>

int main(void) {
	printf("Enter 5 real numbers: ");
	int arr[5];
	int sum = 0, sum2 = 0;
	double sigma = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	sum /= 5;
	for (int i = 0; i < 5; i++) {
		sum2 += (arr[i] - sum) * (arr[i] - sum);
	}
	sigma = sqrt((double)sum2 / 5);
	printf("Standard Deviation = %.3f", sigma);
	return 0;
}