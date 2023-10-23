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
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}

	putchar('\n');
}
