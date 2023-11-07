#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the n bytes of s2
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t size1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t size2 = (s2 != NULL) ? strlen(s2) : 0;
	size_t j;
	size_t i;

	/*Calculates the length of the result depending on n*/
	size_t result_size = size1 + ((n < size2) ? n : size2);

	/*Allocating memory for the result*/
	result = malloc(result_size + 1);

	if (result == NULL)
		return (NULL); /*Malloc failed*/

	/*Copying s1 into result*/
	for (i = 0; i < size1; i++)
	{
		result[i] = s1[i];
	}

	/*Copies n firsts characters of s2 into result*/
	for (j = 0; j < n && j < size2; j++)
	{
		result[i + j] = s2[j];
	}

	/*Adding NULL char*/
	result[result_size] = '\0';

	return (result);
}
