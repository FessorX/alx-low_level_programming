#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int rows;
	int columns;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				x = (rows * columns);
				if (columns == 0)
					_putchar('0' + x);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (x <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + x);
					}
					else if (x > 9 && x < 100)
					{
						_putchar(' ');
						_putchar('0' + (x / 10));
						_putchar('0' + (x % 10));
					}
					else if (x >= 100)
					{
						_putchar('0' + (x / 100));
						_putchar('0' + ((x / 10) % 10));
						_putchar('0' + (x % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
