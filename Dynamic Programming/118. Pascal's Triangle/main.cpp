#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
	// Allocate 2D dynamic array
	int** Pascal = (int**)malloc(sizeof(int*) * numRows);
	for (int i = 0; i < numRows; i++)
	{
		Pascal[i] = (int*)malloc(sizeof(int) * i);
	}
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numRows; j++)
		{
			Pascal[i][j] = 0;
		}
	}
	*returnSize = numRows;
	*returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
	for (int i = 0; i < numRows; i++) {
		(*returnColumnSizes)[i] = i + 1;
		Pascal[i][0] = 1;
		Pascal[i][i] = 1;
		for (int j = 1; j < i; j++) {
			Pascal[i][j] = Pascal[i - 1][j - 1] + Pascal[i - 1][j];
		}
	}
	return Pascal;
}
int main() {
	int num;
	printf("Enter the number of rows in Pascal's Triangle: ");
	scanf("%d", &num);
	if (num <= 0) {
		printf("Number of rows must be greater than 0.\n");
		return 1;
	}

	int returnSize = num;
	int* returnColumnSizes = (int*)malloc(sizeof(int) * num);
	int** result = generate(num, &returnSize, &returnColumnSizes);
	printf("Pascal's Triangle with %d rows:\n", num);
	printf("[");
	for (int i = 0; i < returnSize; i++) {
		printf("[");
		for (int j = 0; j < returnColumnSizes[i]; j++) {
			if (j== returnColumnSizes[i]-1)
			{
				printf("%d", result[i][j]);
			}
			else
			{
				printf("%d, ", result[i][j]);
			}
		}
		printf("], ");
	}
	printf("]\n");
	for (int i = 0; i < returnSize; i++) {
		free(result[i]);
	}
	system("PAUSE");
	return 0;
}