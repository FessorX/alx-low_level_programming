#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print char, integer, float and string
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(args, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{	case 'c':
				switch (start)
				{case 1:printf(", "); }
				start = 1;
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				switch (start)
				{case 1:printf(", "); }
				start = 1;
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				switch (start)
				{case 1:printf(", "); }
				start = 1;
				printf("%f", va_arg(args, double));
				break;
			case's':
				switch (start)
				{case 1:printf(", "); }
				start = 1;
				p = va_arg(args, char*);
				if (p)
				{	printf("%s", p);
					break; }
				printf("%p", p);
				break; }
		j++;
	}
	printf("\n");
	va_end(args);
}
