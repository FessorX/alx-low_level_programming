#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int ch;
	int gap;

	if (n > 0)
	{
		for (ch = 1; ch <= n; ch++)
		{
			for (gap = 1; gap < ch; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

