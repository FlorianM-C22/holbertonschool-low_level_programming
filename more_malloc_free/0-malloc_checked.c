#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *malloc_checked - allocates memory using malloc
 * @b: amount of memory
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *mallocated; /*Pointer to allocated memory*/

	mallocated = malloc(b);

	if (mallocated == NULL)
	{
		/*Failed*/
		exit(98);
	}

	return (mallocated); /*Success*/
}
