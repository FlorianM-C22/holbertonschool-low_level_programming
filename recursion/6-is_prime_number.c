#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>

/**
 *is_prime_number - returns 1 if the input integer is a prime
 *prime_number_helper - helps us find prime numbers
 *@n: integer to be tested
 *@guess: helps us guess if n is a prime number
 * Return: 0
 */

int prime_number_helper(int n, int guess);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number_helper(n, n - 1));
}
/**
 *prime_number_helper - helps us find prime numbers
 *@n: integer to be tested
 *@guess: helps us guess if n is a prime number
 * Return: 0
 */
int prime_number_helper(int n, int guess)
{
	if (n <= 1)
		return (0);

	if (guess == 1)
		return (1);

	if (n % guess == 0)
		return (0);

	return (prime_number_helper(n, guess - 1));
}
