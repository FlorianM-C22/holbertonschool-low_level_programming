#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - concatenates two strings
 *@nmemb: number of elements in the array
 *@size: size of those elements
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*Declaring a variable for total size*/
	unsigned int totalSize = (nmemb * size);
	/*Allocating memory of totalSize*/
	unsigned int *mallocated = malloc(totalSize);

	if (totalSize == 0) /*Checking if NULL*/
	{
		return (NULL);
	}

	if (mallocated != NULL)
	{
		memset(mallocated, 0, totalSize); /*Setting memory to 0*/
	}

	return (mallocated);
}
