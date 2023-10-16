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
	char ch, chupper;

	for (ch = 97 ; ch <= 122 ; ch++)
	putchar(ch);

	for (chupper = 65 ; chupper <= 90 ; chupper++)
	putchar(chupper);
	putchar('\n');

	return (0);
}
