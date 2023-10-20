#include "main.h"
#include <stdio.h>
/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 *Return: 0 Success
 */
void print_triangle(int size)
{
	int lines, vert, delim;

	if (size <= 0) /*Condition d'arrêt*/
	{
		_putchar('\n');
		return;
	}
	delim = size;
	for (lines = 0; lines < size; lines++)
	{
		delim--;
		for (vert = 0; vert < size; vert++)
		{
			if (vert < delim)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
