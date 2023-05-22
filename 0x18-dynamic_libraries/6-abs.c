#include "main.h"

/**
 * _abs - calculate absolute values
 * @n: integer inout
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
