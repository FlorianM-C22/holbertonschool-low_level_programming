#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _strncpy - Copy a string up to 'n' characters
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /*Declare an integer variable to use as a loop counter*/

	/* Loop through 'src' and 'dest' simultaneously */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad 'dest' with null characters if necessary */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
