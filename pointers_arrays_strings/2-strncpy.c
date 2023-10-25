#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_strncpy - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: numeric value to define the 'n' first octets of *src
 *main - check main.h
 *Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	dest[n] = '\0';

	return (0);
}
