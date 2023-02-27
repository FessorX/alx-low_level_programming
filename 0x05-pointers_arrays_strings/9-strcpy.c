#include "main.h"

/**
 * _strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
