#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints a list of arguments of different data types
 *
 * @format: list of types of arguments to be printed
 *          c: char
 *          i: integer
 *          f: float
 *          s: string
 *          any other character: ignore
 *
 * Return: void
 */

#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *space;

	va_start(args, format);

	while (format && format[i])
	{
		space = "";
		if (format[i + 1])
			space = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), space);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), space);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, space);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

