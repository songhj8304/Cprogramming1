#include<stdio.h>
int main(void) {
	int arr[5];
	printf("Please input five integers: ");
	for (int k = 0; k < 5; k++) {
		scanf_s("%d", &arr[k]);
	}
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\nEven numbers: ");
	for (int j = 0; j < 5; j++) {
		if (arr[j] % 2 == 0) {
			printf("%d ", arr[j]);
		}
	}
	return 0;
}