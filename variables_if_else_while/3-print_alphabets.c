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
		putchar(ch);
	putchar('\n');

	char ch_upper;

	for (ch_upper = 65 ; ch_upper <= 90 ; ch_upper++)
		putchar(ch_upper);
	putchar('\n');

	return (0);
}
