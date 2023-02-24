#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char ch;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch / 10 > 0)
				_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
