#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 * @n: character tested
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int absNum = (n < 0) ? -n : n;
	int lastDigit = absNum % 10;
	int lastDigitChar = '0' + lastDigit;

	return (lastDigit);

	_putchar(lastDigitChar);

	return (0);

}
