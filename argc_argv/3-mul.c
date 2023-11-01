#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 SUCCESS
*/
int main(int argc, char **argv)
{
	int n = strtol(argv[1], NULL, 10);
	int m = strtoll(argv[2], NULL, 10); /*Converts arguments as integers*/
	int result = (n * m);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result); /*Prints the result*/
	}

	return (0);
}
