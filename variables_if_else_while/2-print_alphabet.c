#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will print the alphabet
 * with the putchar function
 * Return: 0 *
 */
int main(void)

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
