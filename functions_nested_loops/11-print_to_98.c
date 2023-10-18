#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: character tested
 * Return: 0 success
 */
void print_to_98(int n)
{
	int digit;

	if (n <= 98)
	{
	while (digit > 0)
		{
			_putchar(digit % 10 + '0');
			digit /= 10;
		}

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + 1);
		}
		else
		{
			_putchar('\n');
		}
	}
}
