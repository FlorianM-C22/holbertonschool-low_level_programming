#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: char string to be tested
 *@accept: char string to be tested
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; /*Variable to calculate the length*/
	unsigned int i, j; /*To navigate through 's' and 'accept' strings*/

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == '\0')
			return (length); /* Return the calculated length if '\0' is found */
	}

	for (i = 0; i < strlen(s); i++)
		{
		for (j = 0; j < strlen(accept); j++)
			{
			if (s[i] == accept[j])
				length++;
			break;
			}
		}
		return (length);
}
