#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{

	int len;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		s--;
	}

	_putchar('\n');
}
