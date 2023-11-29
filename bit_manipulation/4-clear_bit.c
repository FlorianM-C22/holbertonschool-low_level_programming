#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 *@index: the bit you want to get
 *@n: number to be converted
 * Return: 0 SUCCESS
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
