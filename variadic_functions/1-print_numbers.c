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

	va_start(ap, n); /*Initialize arguments list*/

	if (n == 0)
		return; /*If no arguments, return 0*/

	/*Print 1st number without separator*/
	printf("%d", va_arg(ap, int));

	/*Print remaining numbers with a separator*/
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ap, int));
		if (separator == NULL)
		{
			break;
		}
	}

	/*Clean arguments list*/
	va_end(ap);

	printf("\n");
}
