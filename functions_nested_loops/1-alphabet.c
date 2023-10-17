#include "main.h"

/**
 * main - includes all the functions needed for the program to run
 * print_alphabet - prints alphabet
 * Return 0: Success
 */

void print_alphabet(void)
{

	char c;

		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
}
