#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will assign a random number to the variable n
 * and will print the last digit of the number stored in the variable n
 * Return: 0 *
 */
int main(void)
{
	int n, modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo = n % 10;

	if (modulo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	}

	else if (modulo == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, modulo);
	}

	else if (modulo < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
	}

	return (0);
}
