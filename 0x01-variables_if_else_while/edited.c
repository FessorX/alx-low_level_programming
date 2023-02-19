#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = '0'; t <= '9'; t++) /*print second of pair*/
			{
				for (o = '0'; o <= '9'; o++)
				{
					if (tens == t && ones == o)
					{
						continue;
					}
					else
					{
						putchar(tens);
						putchar(ones);
						putchar(' ');
						putchar(t);
						putchar(o);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
