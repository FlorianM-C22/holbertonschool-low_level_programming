#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n - 1 && src[i]; i++)
		{
		dest[i] = src[i];
		}

	return (dest);
}
