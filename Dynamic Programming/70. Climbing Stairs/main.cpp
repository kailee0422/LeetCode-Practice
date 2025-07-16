#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return climbStairs(n - 1) + climbStairs(n - 2);
	}
}

int main() {
	int n = 0;
	printf("Enter the number of stairs: ");
	scanf("%d", &n);
	while (n > 45 || n < 1)
	{
		printf("Invalid input. Please enter a number between 1 and 45 :\n");
		scanf("%d", &n);
	}
	printf("Number of ways to climb %d stairs: %d\n", n, climbStairs(n));
	system("PAUSE");
	return 0;
}