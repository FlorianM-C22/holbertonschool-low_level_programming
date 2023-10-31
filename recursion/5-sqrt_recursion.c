#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>
#include <math.h>

/**
 *_sqrt_recursion_helper - helps to find the square root
 *@guess: current guess for the square root
 *@n: integer to be tested
 *Return: n if found or 1
*/
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);  /*Nous avons trouvé la racine carrée.*/
	}
	if (guess * guess > n)
	{
		return (-1);  /*n n'est pas un carré parfait, retourne -1.*/
	}
	/*Essaye le prochain nombre comme hypothèse.*/
	return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer to be tested
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 1));
}
