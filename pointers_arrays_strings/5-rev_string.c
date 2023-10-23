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
	int length = 0;
	char *end = s;
	char temp;

	while (*end != '\0') /*Calculate the length of the string*/
		{
		length++;
		end++;
		}

	end--;

	while (s < end)
		{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
		}
}
