#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 * @n: character tested
 * Return: 0 success
 */
int _abs(int n)
{
	if (n < 0)
	{
		printf("%d\n", n);
		return (-n);
	}

	else
	{
		printf("%d\n", n);
		return (n);
	}
}
