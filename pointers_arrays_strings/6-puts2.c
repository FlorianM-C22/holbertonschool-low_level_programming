#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *puts2 - prints every other character of a string, starting with the first
 *character, followed by a new line
 *@str : pointer tested
 *Return: Always 0.
*/
void puts2(char *str)
{
	int i = 0; /*Declaring an int to get *str's index*/

	/*While str hasn't reach the NULL value, the loop goes on*/
	while (str[i] != '\0')
		{
		/**If i's value is a multiple of 2, prints the char inside the array*/
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
		}
	_putchar ('\n'); /*Return a new line*/
}
