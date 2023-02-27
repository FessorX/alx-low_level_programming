#include "main.h"

/**
 * _strlen- gets the length of a string
 *
 * @s: pointer to string
 * return: length of s
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s[n] != '\0')
	{
		n++;
	}
	return n;
}
