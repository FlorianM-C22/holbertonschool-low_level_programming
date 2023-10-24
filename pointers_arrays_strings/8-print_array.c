#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line
 *@a: test pointer
 *@n: test integer
 *Return: Always 0.
*/
void print_array(int *a, int n)
{
	int i; /*Index value*/

	/*Indexation increments till it reaches n*/
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /*Prints the value of i*/
		if (i < n - 1) /*Prints ", " except for the last one*/
		{
			printf(", ");
		}
	}
	printf("\n");
}
