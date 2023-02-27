#include "main.h"

/**
 * _strlen- gets the length of a string
 *
 * @s: pointer to string
 * Return: length of s
 */

int _strlen(char *s)
{
	int n;
	int str;

	n = 0;
	str = *s;

	while (str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}
