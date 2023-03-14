#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int c, i, j, ii;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	args = malloc((c + 1) * sizeof(char));

	if (args == NULL)
	{
		free(args);
		return (NULL);
	}

	for (i = j = ii = 0; ii < c; j++, ii++)
	{
		if (av[i][j] == '\0')
		{
			args[ii] = '\n';
			i++;
			ii++;
			j = 0;
		}
		if (ii < c - 1)
			args[ii] = av[i][j];
	}
	args[ii] = '\0';

	return (args);
}
