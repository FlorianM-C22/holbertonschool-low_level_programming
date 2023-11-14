#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /*Index value*/

	/*Check for valid array and comparison function*/
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
		/*Return -1 if array is invalid or size is less than or equal to 0*/

	/*Iterate through the array elements*/
	for (i = 0; i < size; i++)
	{
		/*Use the comparison function to check the current array element*/
		if (cmp(array[i]) != 0)
			return (i); /*Return the index if the comparison is not 0*/
	}

	return (-1);
}
