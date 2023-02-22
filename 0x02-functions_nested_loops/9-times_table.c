#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int rows;
	int columns;
	int x;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			x = (rows * columns);

			if (columns == 0)
			{
				_putchar('0' + x);
			}
			else if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
			}
		}
		_putchar('\n');
	}
}
