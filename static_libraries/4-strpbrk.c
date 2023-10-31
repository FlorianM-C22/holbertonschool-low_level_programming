#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: char string to be tested
 *@accept: char string to be tested
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j; /*Declaring 2 index values to go through both strings*/

	/*For the whole lenght of string s*/
	for (i = 0; i < strlen(s); i++)
	{
		/*For the whole length of accept*/
		for (j = 0; j < strlen(accept); j++)
		{
		if (s[i] == accept[j]) /*If character matching*/
			return (&s[i]); /*Return the adress of this character*/
		}
	}

	return (NULL);
}
