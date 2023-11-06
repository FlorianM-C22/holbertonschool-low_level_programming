#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: copy of string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *buffer;

	if (str == NULL)
		return NULL;

	buffer = malloc(sizeof(char) * strlen(str));
	if (buffer == NULL) // bad alloc
		return NULL;

	for (i = 0; i < strlen(str); ++i)
		buffer[i] = str[i];

	return buffer;
}
