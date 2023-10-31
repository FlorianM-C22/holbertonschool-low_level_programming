#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@str : pointer tested
 *Return: Always 0.
*/
void _puts(char *str)
{
	while (*str)
		{
		write(1, str, 1); /* Write one character at a time*/
		str++;
		}
	write(1, "\n", 1); /*Write a newline character*/
}
