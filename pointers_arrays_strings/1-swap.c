#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *and updates the value it points to to 98.
 *@a: first integer
 *@b: second integer
 *Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int swap = *a; /*Store the value pointed to by 'a' in a temporary int*/
	*a = *b; /*Swaps values of a and b*/
	*b = swap; /*Updates the value of b into the temp variable*/
}
