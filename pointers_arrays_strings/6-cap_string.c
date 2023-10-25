#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @char *: character string to be converted to uppercase
 * @str: string to test
 * Return: 0
 */
char *cap_string(char *str) /*Pointer to an array named str */
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\n')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}

	return (str);
}
