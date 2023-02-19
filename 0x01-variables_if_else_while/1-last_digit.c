#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *  Return: 0 (Success)
 */
int main(void)
{
	int n, over, under, zero, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	over = (n % 10) > 5;
	under = (n % 10) < 6 && (n % 10) != 0;
	zero = (n % 10) == 0;
	last = n % 10;

	if (over)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (under)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else if (zero)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
