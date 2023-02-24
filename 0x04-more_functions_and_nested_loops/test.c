#include <stdio.h>

/**
 * print_triangle- creates a triangle of given size
 * @size: size of traingle
 */

int main(void)
{	
	int row;
	int ch;
	int size = 8; 

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (ch = 1; ch <= size; ch ++)
			{	if (ch >= 1 && ch <= --size)
				{
					printf(" ");
				}
				else
					printf("#");
			}
			printf("\n");
		}
	}
	else
		printf("\n");

	return (0);
}
