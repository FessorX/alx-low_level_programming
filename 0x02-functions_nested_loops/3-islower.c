#include "main.h"

/**
 * islower- checks lowercase alphabet
 * @c: characte input
 * Return: 0 (Uppercase), 1 (lower)
 */

int islower(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (0);
	}
	else if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
}
