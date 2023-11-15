#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - it's a calculator
 * @argc: argument count
 * @argv: argument value
 * Return: 0 = SUCCESS
 */
int main(int argc, char *argv[])
{
	int (*func_ptr)();

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
