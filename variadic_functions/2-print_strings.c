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
	unsigned int i;

	va_start(ap, n);

	/*Iterate through the arguments*/
	for (i = 0; i < n; i++)
	{
		const char *currentString = va_arg(ap, const char *);

		/*Check if the current string is NULL*/
		if (currentString == NULL)
		{
			printf("(nil)");
		}
		else
		{
			/*Print the current string*/
			printf("%s", currentString);
		}

		/*Print the separator if it's not the last string*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap); /*Cleaning the list*/

	printf("\n"); /*New line*/
}
