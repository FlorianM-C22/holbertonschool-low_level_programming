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

for (ch = '0'; ch <= '9'; ch++)
{
		putchar(ch);
}
{
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
}
	putchar('\n');

return(0);

}
