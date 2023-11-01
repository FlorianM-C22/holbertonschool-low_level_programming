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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
