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
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *s;
	char c;
	float f;
	const char *pformat = format;

	va_start(args, format);

	while (*pformat != '\0')
	{
		switch (*pformat)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s == NULL) ? "(nil)" : s);
				break;
			default:
				break;
		}
		pformat++;
		if (*pformat && *(pformat + 1))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
