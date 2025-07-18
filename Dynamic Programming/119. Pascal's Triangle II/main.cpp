#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
	int* Pascal = (int*)malloc((rowIndex + 1) * sizeof(int));
	Pascal[0] = 1; // The first element is always 1
	for (int i = 1; i <= rowIndex; i++) {
		Pascal[i] = 1; // The last element is always 1
		for (int j = i - 1; j > 0; j--) {
			Pascal[j] = Pascal[j] + Pascal[j - 1]; // Calculate the value based on the previous row
		}
	}
	return Pascal;
}
int main() {
	int num = -1;
	while (num < 0 || num > 33) {
		printf("Enter a row index (0-33): ");
		scanf("%d", &num);
		if (num < 0 || num > 33) {
			printf("Invalid input. Please try again.\n");
		}
	}
	int returnSize = num + 1;
	int* result = getRow(num, &returnSize);

	printf("Row %d of Pascal's Triangle: ", num);
	printf("[");
	for (int i = 0; i < returnSize; i++) {
		if (i == returnSize - 1) {
			printf("%d", result[i]);
		}
		else
		{
			printf("%d, ", result[i]);
		}
	}
	printf("]\n");
	free(result);

	system("PAUSE");
	return 0;
}