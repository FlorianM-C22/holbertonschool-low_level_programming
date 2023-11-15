#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != n && separator != NULL)
		printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
