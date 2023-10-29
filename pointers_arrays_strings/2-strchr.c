#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strchr - locates a character in a string
 *@s: char string to be tested
 *@c: char string to be tested
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	/*Checking the char string*/
	for (i = 0; s[i]; i++)
		if (s[i] == c)/*If finds the character*/
		{
			return (&s[i]);/*Returns the 1st occurence of the character*/
		}

	return (NULL);/*Returns NULL if char is not found*/

}
