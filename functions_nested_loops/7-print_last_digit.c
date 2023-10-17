#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 * @n: character tested
 * Return: 0 success
 */
int print_last_digit(int n)

{
	int lastDigit;

	if (n < 0)
	{
		n = -n;
	}

	lastDigit = n % 10;
	char lastDigitChar = '0' + lastDigit;

	write(1, &lastDigitChar, 1);


return (0);

}
