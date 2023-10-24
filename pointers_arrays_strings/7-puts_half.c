#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *puts_half - function that prints half of a string
 *character, followed by a new line
 *@str : pointer tested
 *Return: Always 0.
*/
void puts_half(char *str)
{
	int i, n;

	i = 0;

	n = strlen(str);
	int m = (n / 2);

	while (str[i] != '\0')
	{
		if (n <= m)
			_putchar(str[i]);
	i++;
	n--;
	}
	_putchar('\n');
}
