#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: numeric value to define the 'n' first octets of *src
 *main - check main.h
 *Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest; /*Char variable to return dest*/

	while (*dest != '\0')
	{
		dest++;
	}
	strcpy(dest, src); /*Copy both strings and return them to a new buffer*/

	dest[n] = '\0'; /*Adds a NULL character after to the chain + n*/

	return (dest_start);
}
