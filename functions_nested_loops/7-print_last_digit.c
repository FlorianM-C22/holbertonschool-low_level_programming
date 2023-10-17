#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 * @n: character tested
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)

		{
		lastDigit = lastDigit * -1;
		}

		_putchar ('0' + lastDigit);

	return (lastDigit);

}
