#include "main.h"

/**
 * print_alphabet_x10- prints alphabet to stdout
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 10;

	while (y >= 0)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');
		y--;
	}

	return (0);
}
