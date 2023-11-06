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
	size_t size1 = strlen(s1);
	size_t size2 = strlen(s2);
	size_t totalSize = size1 + size2;

	char *result = malloc(totalSize + 1);

	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < size1; i++)
			result[i] = s1[i];

	if (s2 != NULL)
		for (j = 0; j < size2; j++)
			result[i + j] = s2[j];

	result[totalSize] = '\0';

	return (result);
}
