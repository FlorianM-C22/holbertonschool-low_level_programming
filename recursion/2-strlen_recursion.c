#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strlen_recursion - returns the length of a string
 *@s: string to be counted
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length; /*Declaring an int to return the length of the string*/

	if (*s == '\0')
	{
		return (0);
	}

	length = _strlen_recursion(s + 1);

	return (1 + length);
}
