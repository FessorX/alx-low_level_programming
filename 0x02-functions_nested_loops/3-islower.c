#include "main.h"

/**
 * _islower- checks lowercase alphabet
 * @c: characte input
 * Return: 0 (Uppercase), 1 (lower)
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	
	_putchar('\n');
}
