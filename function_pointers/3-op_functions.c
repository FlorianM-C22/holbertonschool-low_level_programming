#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: num 1
 * @b: num 2
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: num 1
 * @b: num 2
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: num 1
 * @b: num 2
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of a by b
 * @a: num 1
 * @b: num 2
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: num 1
 * @b: num 2
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a & b);
}
