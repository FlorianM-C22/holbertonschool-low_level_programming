#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character tested
 *Return: 0 Success
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0) /*Condition d'arrêt*/
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		n--;
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
