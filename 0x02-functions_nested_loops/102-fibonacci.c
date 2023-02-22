#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int limit = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (limit / 2); i++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (limit % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
