#include "main.h"

/**
 * _islower- checks lowercase alphabet
 * @c: characte input
 * Return: 0 (Uppercase), 1 (lower)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
