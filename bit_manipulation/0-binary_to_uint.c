#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - deletes the node at
 *@b: pointer to a string of 0 and 1 chars
 * Return: 0 SUCCESS
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		result <<= 1;
		result += b[i] - '0';
		i++;
	}

	return (result);
}
