#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *puts_half - function that prints half of a string
 *character, followed by a new line
 *@str : pointer tested
 *@i: index value
 *@n: strlen value
 *Return: Always 0.
*/
void puts_half(char *str)
{
	int i, n, m; /*Declare initial values*/

	i = 0;

	n = strlen(str); /*String length*/
	m = (n / 2); /*We need to divide the string by 2 to print half of it*/

	while (str[i] != '\0') /*Initiate the loop*/
	{
		if (n <= m)
			_putchar(str[i]);
	i++;
	n--;
	}
	_putchar('\n');
}
