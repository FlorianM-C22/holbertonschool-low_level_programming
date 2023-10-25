#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * reverse_array - reverses the content of an array of integers
 *@a: pointer to the array 'a'
 *@n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
