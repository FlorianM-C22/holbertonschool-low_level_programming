#include "main.h"

/**
 * print_sign - checks if lowercase
 * @n: character tested
 * Return: 1 and prints '+' if greater than 0
 */
int print_sign(int n)
{
	if (n > 0)
		{
		return (1);
		_putchar ('+');
		}

	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}

	else
		{
		return (-1);
		_putchar ('-');
		}
}
