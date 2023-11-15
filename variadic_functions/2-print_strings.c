#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i; /*To iterate through the arguments*/

	va_start(ap, n);

	/*If at least one string argument, print it without a separator*/
	if (n > 0)
		printf("%s", va_arg(ap, const char *));

	/*Iterate through the remaining arguments*/
	for (i = 1; i < n; i++)
	{
		/*Checks if not last string*/
		if (i < n)
			printf("%s", separator);

		if (separator == NULL)
			printf("(nil)");

		printf("%s", va_arg(ap, const char *));
	}

	va_end(ap);/*Cleaning the list*/

	printf("\n");/*New line*/
}
