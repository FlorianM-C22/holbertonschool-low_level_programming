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
	int length = 0;
	int halfLength;
	int i = 0;

	while (str[length] != '\0')
		{
		length++;
		}

	halfLength = length / 2;

	for (i = 0; i < halfLength; i++)
	{
		putchar(str[i]);
	}
	_putchar('\n');
}
