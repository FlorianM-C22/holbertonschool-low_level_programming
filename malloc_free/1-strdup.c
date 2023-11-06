#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: copy of string
 * Return: 0 SUCCESS
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *buffer;

	if (str == NULL)
		return (NULL);

	buffer = malloc(strlen(str) * (sizeof(char) + 1));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < strlen((str) + 1); i++)
		buffer[i] = str[i];

	return (buffer);

	free(buffer);
}
