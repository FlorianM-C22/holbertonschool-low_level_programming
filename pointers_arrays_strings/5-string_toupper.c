#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @char *: character string to be converted to uppercase
 * @str: string to test
 * Return: 0
 */
char *string_toupper(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
