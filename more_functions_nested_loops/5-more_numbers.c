#include "main.h"

/**
 * more_numbers - numbers 10 times the numberbers, from 0 to 14
 *followed by a new line
 *Return: 0 Success
 */
void more_numbers(void)
{
	int count, number;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
			if (number > 9)
			{
			_putchar('0' + (number / 10));
			_putchar('0' + (number % 10));
			}

			else
			{
			_putchar('0' + number);
			}

		_putchar('\n');
	}
}
