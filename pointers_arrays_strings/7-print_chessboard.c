#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *print_chessboard - prints the chessboard
 *@a: pointer to the chessboard
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (a[i][j] != ' ')
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
