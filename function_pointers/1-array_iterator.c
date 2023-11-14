#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array to print
 * @size: size of the array
 * @action: action to perform
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL && size == '\0')
		return;

	for (size = 0; size < 5; size++)
		action(array[size]);
}
