#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - concatenates two strings
 *@min: min value
 *@max: max value
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int arrSize;
	int *myArray;
	int i;

	if (min > max)
		return (NULL);

	arrSize = (max - min + 1);

	myArray = malloc(arrSize * sizeof(int));

	if (myArray == NULL)
		return (NULL);

	for (i = 0; i < arrSize; i++)
		myArray[i] = min + i;

	return (myArray);
}
