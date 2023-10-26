#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * leet - we go full 1337
 * @s: string to test
 * Return: 0
 */
char *leet(char *s) /*Pointer to an array named s*/
{
	size_t i;
	size_t y;

	char repl[] = "aeotlAEOTL"; /*Letters to be replaced*/
	char num[] = "4307143071"; /*Numbers that will be put instead*/

	/*For every char in str*/
	for (i = 0; i < strlen(s); i++)
	{
		/*For every char in letters*/
		for (y = 0; y < strlen(repl); y++)
		{
			/*Are current letters current numbers ?*/
			if (repl[y] == s[i])
				s[i] = num[y]; /*If yes, replace*/
		}
	}

	return (s);
}
