#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will print the alphabet
 * with the putchar function in lowercase then in UPPERCASE
 * Return: 0 *
 */
int main(void)
{
	char ch;

	for (ch = 97 ; ch <= 122 ; ch++)
		if (ch != 113 && ch != 101)
			putchar(ch);

	return (0);
}
