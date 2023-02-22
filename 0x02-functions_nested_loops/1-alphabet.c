#include "main.h"

/**
 * print_alphabet- prints alphabet to stdout
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
}
