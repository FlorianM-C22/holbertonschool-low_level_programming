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

	if (buffer == NULL)
		return (NULL);

	buffer = malloc(strlen(str) * (sizeof(str)));

	for (i = 0; i < strlen(str); i++)
		buffer[i] = str[i];

	return (buffer);

	free(buffer);
}
