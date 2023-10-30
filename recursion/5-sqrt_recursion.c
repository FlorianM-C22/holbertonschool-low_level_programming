#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>

/**
 *_sqrt_recursion - returns the natural square root of a number
 *_sqrt_recursion_helper - help to find square root
 *@n: integer to be tested
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n);
}
