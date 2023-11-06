#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **arr1;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr1 = malloc(sizeof(int) * height);

	if (arr1 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		arr1[i] = malloc(sizeof(int) * width);

	if (arr1[i] == NULL)
		return (NULL);

	for (j = 0; j < width ; j++)
		arr1[i][j] = 0;

	return (arr1);
}
