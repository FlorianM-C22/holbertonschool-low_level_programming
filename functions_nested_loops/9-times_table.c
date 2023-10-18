#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 * Return: 0 success
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int result = i * j;

	for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++);
		_putchar ('0' + result);
		_putchar (',');
		_putchar (' ');
		}

	_putchar ('\n');

}
