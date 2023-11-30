#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *@index: the bit you want to get
 *@n: number to be converted
 * Return: 0 SUCCESS
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
