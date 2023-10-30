#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>

/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: value number 1
 *@y: value number 2
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	/*General case : x^y = x * x^(y-1)*/
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
