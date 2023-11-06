#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	size_t size1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t size2 = (s2 != NULL) ? strlen(s2) : 0;
	size_t totalSize = size1 + size2;

	char *result = malloc(totalSize + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		result[i + j] = s2[j];
	}

	result[totalSize] = '\0';

	return (result);
}
