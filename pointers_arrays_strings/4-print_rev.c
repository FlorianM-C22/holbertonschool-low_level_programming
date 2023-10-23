#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s : pointer tested
 *Return: Always 0.
*/
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0') /*Defining the length of the string*/
		{
		length++;
		s++;
		}

	s--; /*Ramener s à la fin de la chaîne*/

	while (length > 0) /*Reverse display of the string*/
		{
		_putchar(*s);
		s--;
		length--;
		}

_putchar('\n'); /*New line*/
}
