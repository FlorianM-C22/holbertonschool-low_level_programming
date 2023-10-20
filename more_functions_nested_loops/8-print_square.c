#include "main.h"

/**
 * print_square - draws a square
 * @size: number of lines
 *Return: 0 Success
 */
void print_square(int size)
{
	int lines, vert;

	if (size <= 0) /*Condition d'arrêt*/
	{
		_putchar('\n');
		return;
	}
	for (lines = 0; lines < size; lines++)
	{
		for (vert = 0; vert < size; vert++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

