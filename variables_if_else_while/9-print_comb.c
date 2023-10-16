#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will print all possible combinations of single-digit
 * numbers, separated by a comma while using putchar
 * Return: 0 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
