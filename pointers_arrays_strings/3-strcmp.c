#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _strcmp - Copy a string up to 'n' characters
 *@s1: string 1
 *@s2: string 2
 *works like strcmp
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	/*Tout pendant que s1 et s2 sont différents de null*/
	while (*s1 != '\0' && *s2 != '\0')
	{
		/*Calcule et retourne la différence entre s1 et s2 */
		if (*s1 - *s2)
		{
			return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (0);
}
