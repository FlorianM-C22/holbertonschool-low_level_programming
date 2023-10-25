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
		if (i == 0 || isspace(str[i - 1]) || ispunct(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}

		else
		{
		str[i] = tolower(str[i]);
		}
	}

	return (str);
}
