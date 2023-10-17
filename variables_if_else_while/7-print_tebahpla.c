#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will print the alphabet
 * with the putchar function in reverse order
 * Return: 0 *
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
{
	putchar(letter);
	letter--;
}
	putchar('\n');

return (0);
}
