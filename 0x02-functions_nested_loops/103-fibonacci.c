#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum = 1;
	int a;
	int b;
	int sumE = 0;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		sumE += sum;
	}
	printf("%d\n", sumE);

	return (0);
}
