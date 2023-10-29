#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strstr - locates a substring
 *@haystack: char string to be tested
 *@needle: char string to be tested
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, j; /*Index values to navigate through both strings*/

	for (i = 0; i < strlen(haystack); i++)
	{
		size_t temp_i = i; /*Will mark the start of the occurrence*/

		for (j = 0; j < strlen(needle) && temp_i < strlen(haystack); j++)
		{
			if (haystack[temp_i] == needle[j])
			{
				temp_i++;
				if (j == strlen(needle) - 1)
				{
					return (&haystack[i]);
				}
			}
			else
			{
				break; /*Exiting the loop if no match*/
			}
		}
	}

	return (NULL); /*Substring not found*/
}
