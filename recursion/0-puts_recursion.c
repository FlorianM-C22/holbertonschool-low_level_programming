#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_puts_recursion - prints a string followed by a new line
 *@s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	{
	if (*s == '\0')
		return;
		_putchar('\n');

	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
