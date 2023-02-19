#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int units;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++) /*hundreds place*/
	{
		for (tens = (hundreds + 1); ten <= '9'; ten++) /*tens=100s+1*/
		{
			for (units = (tens + 1); units <= '9'; units++) /*units=10s+1*/
			{
				putchar(hundreds);
				putchar(tens);
				putchar(units);
				if (hundreds != '7' || tens != '8' || units != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
