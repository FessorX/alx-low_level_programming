#include "main.h"

/**
 * print_triangle- creates a triangle of given size
 * @size: size of traingle
 */

void print_triangle(int size)
{
	int row;
	int column;
	int ch;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}

			for (ch = 1; ch <= row; ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
