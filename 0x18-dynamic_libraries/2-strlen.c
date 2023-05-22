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

	n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
