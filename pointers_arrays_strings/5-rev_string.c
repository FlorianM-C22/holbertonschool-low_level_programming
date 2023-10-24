#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *rev_string - a function that reverses a string
 *@s : pointer tested
 *Return: Always 0.
*/
void rev_string(char *s)
{
	int i, j;

	j = _strlen(s) - 1; /*Defining j at the end of the string*/

	for (i = 0; i < j; i++) /*Reverse function to operate character swap*/
		{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
		j--;
		}
}
