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

	/*If s is NULL, return NULL to avoid any crashes*/
	if (src == NULL)
	{
		return (NULL);
	}

	/*For every character of the src string which is not a NULL*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		{
		dest[i] = src[i]; /*Src and dest are equal (copying string)*/
		}

	if (i < n) /*If i is smaller than n, dest[i] is NULL*/
	{
		dest[i] = '\0';
	}

	return (dest);
}
