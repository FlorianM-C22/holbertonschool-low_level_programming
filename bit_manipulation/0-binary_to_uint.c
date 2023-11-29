#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - deletes the node at
 *@b: pointer to a string of 0 and 1 chars
 * Return: 0 SUCCESS
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
