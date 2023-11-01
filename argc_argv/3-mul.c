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

	int n = 0;
	int m = 0;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = strtol(argv[1], NULL, 10);
	m = strtol(argv[2], NULL, 10);
	result = (n * m);

	printf("%d\n", result); /*Prints the result*/

	return (0);
}
