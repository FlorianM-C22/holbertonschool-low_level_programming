#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid - frees the grid previously created by alloc_grid
 * @grid: grid of alloc_grid
 * @height: height of the array
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return; /*Nothing to free*/

	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]); /*Free each line*/
		}
	}

	free(grid); /*Free the array*/
}
