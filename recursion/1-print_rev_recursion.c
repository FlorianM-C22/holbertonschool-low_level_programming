#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string to be printed
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*If we reach NULL, return*/
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
