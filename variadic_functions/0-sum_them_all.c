#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be taken in account
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n); /*Initialize the argument list*/

	sum = 0;

	if (n == 0)
		return (0); /*If no arguments, return 0*/

	for (i = 0; i < n; i++) /*Get the next argument value*/
		sum += va_arg(ap, int);

	va_end(ap);/*Clean up*/

	return (sum);/*Return sum*/
}
