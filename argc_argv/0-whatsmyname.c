#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 SUCCESS
*/
int main(int argc, char **argv)
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Program name not available\n");
	}

	return (0);
}
